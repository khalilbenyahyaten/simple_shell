#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void loop(void);
char *readline(void);
char **splitline(char *l);
#endif
