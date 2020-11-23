#include "holberton.h"
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
line = readline();
args = splitline(l);
status = execute(args);
free(l);
free(args);
} while (stat);
}
