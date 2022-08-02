#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdbool.h>

void env_reader(char **env);
char **args_isolator(char *input, int *arc);
char *check_existance(char *paths[], char *name, char *programname, int *pcp);
char *dir_generator(char *s1, char *s2);
int function_caller(char *path, char *args[]);

#endif
