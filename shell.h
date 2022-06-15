#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

void _puts(char *str);
int _strlen(char *s);
int t_cd(char **args);
int t_help();
int t_exit();
int lsh_num_builtins();
int _putchar(char c);
int launch(char **args);
int execute(char **args);
char* read_line(void);
void loop(void);
int _strcmp(char *s1, char *s2);
char** split_line(char *line);
#endif
