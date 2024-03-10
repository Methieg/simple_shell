#include "main.h"

/**
 * _strdup -  copies str in the heap memory.
 * @s: Type char pointer str
 * Return: duplicate str.
 */
char *_strdup(const char *s)
{
char *new;
size_t len;

len = _strlen(s);
new = malloc(sizeof(char) * (len + 1));
if (new == NULL)
return (NULL);
_memcpy(new, s, len + 1);
return (new);
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always (0)
 */
int _strlen(const char *s)
{
int len;

for (len = 0; s[len] != 0; len++)
{
}
return (len);
}

/**
 * cmp_chars - compare chars of strings
 * @str: string input
 * @delim: delimiter.
 *
 * Return: (1) if same, (0) if not.
 */
int cmp_chars(char str[], const char *delim)
{
unsigned int i, j, k;

for (i = 0, k = 0; str[i]; i++)
{
for (j = 0; delim[j]; j++)
{
if (str[i] == delim[j])
{
k++;
break;
}
}
}
if (i == k)
return (1);
return (0);
}

/**
 * _strtok - splits string using delimiter.
 * @str: string input
 * @delim: delimiter
 *
 * Return: split string
 */
char *_strtok(char str[], const char *delim)
{
static char *splitted, *str_end;
char *str_start;
unsigned int i, bool;

if (str != NULL)
{
if (cmp_chars(str, delim))
return (NULL);
splitted = str;
i = _strlen(str);
str_end = &str[i];
}
str_start = splitted;
if (str_start == str_end)
return (NULL);

for (bool = 0; *splitted; splitted++)
{
/*loop break finding next token*/
if (splitted != str_start)
if (*splitted && *(splitted - 1) == '\0')
break;
/*delimiter replacement for null char*/
for (i = 0; delim[i]; i++)
{
if (*splitted == delim[i])
{
*splitted = '\0';
if (splitted == str_start)
str_start++;
break;
}
}
if (bool == 0 && *splitted) /*Str != Delim*/
bool = 1;
}
if (bool == 0) /*Str == Delim*/
return (NULL);
return (str_start);
}

/**
 * _isdigit - checks if string is a number
 *
 * @s: string input
 * Return: (1) if string is number. else (0)
 */
int _isdigit(const char *s)
{
unsigned int i;

for (i = 0; s[i]; i++)
{
if (s[i] < 48 || s[i] > 57)
return (0);
}
return (1);
}
