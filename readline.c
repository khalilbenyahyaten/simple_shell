#include "holberton.h"
#define LSH_RL_BUFSIZE 1024
/**
 * readline - reads line
 *
 *Return: char
 */
char *readline(void)
{
int bufsize = LSH_RL_BUFSIZE;
int pos = 0;
char *buffer = malloc(sizeof(char) * bufsize);
int c;

if (!buffer)
{
perror("error\n");
exit(98);
}
while (1)
{
c = read(STDIN_FILENO, &c, 1);
if (c == EOF || c == '\n')
{
buffer[pos] = '\0';
return (buffer);
}
else
{
buffer[pos] = c;
}
pos++;
if (pos >= bufsize)
{
bufsize += LSH_RL_BUFSIZE;
buffer = realloc(buffer, bufsize);
if (!buffer)
{
perror("error\n");
exit(98);
}
}
}
return (buffer);
}
