#ifndef MINISHELL_H
# define    MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>

typedef struct echo
{
    char    **argumment;
    struct data *next;
}   t_data;

char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
void ft_free_list(t_data *head);
int parse_line(t_data **data, char *input);
char **split_line_to_args(char *input);
char *strsplit_by_pipe(char **str);
int	ft_count_args(char *input);
void	ft_add_node(t_data **head, char **arguments);
t_data *creat_node(char **arguments);
int check_qout(char *input);
void exec_commandes(t_data *commandes, char **envp);
void    exec_echo(char **commande);
void    ft_putstr(char *str);
void exec_cd(char **commande, char **envp);
void exec_pwd(char **commande);
char *print_prompt(char **envp);
char *ft_getenv(char **envp, char *var);
char	*ft_strjoin(char const *s1, char const *s2, int flag);
int ft_strcmp(char *s1, char *s2);


#endif