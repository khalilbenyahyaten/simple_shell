#include "shell.h"
/**
 * loop - loop of shell
 *
 *Return: void
 */
void loop(void)
{
char *l;
char **args;
int stat;

do {
printf("$ ");
l = readline();
args = splitline(l);
stat = execute(args);
free(l);
free(args);
} while (stat);
}
