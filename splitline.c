#include "shell.h"
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
/**
 * splitline - splits line
 *
 *@l: line
 *
 *Return: char
 */
char **splitline(char *l)
{
int bufsize = LSH_TOK_BUFSIZE, pos = 0;
char **tokens = malloc(bufsize * sizeof(*char));
char *token;

if (!tokens)
{
perror("error\n");
exit(98);
}
token = strtok(l, LSH_TOK_DELIM);
while (token != NULL)
{
tokens[pos] = token;
pos++;
if (pos >= bufsize)
{
bufsize += LSH_TOK_BUFSIZE;
tokens = realloc(tokens, bufsize *sizeof(*char));
if (!tokens)
{
perror("error\n");
exit(98);
}
}
token = strtok(NULL, LSH_TOK_DELIM);
}
tokens[pos] = NULL;
return (tokens);
}
