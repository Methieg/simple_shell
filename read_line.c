#include "main.h"

/**
 * read_line - reads string_input
 *
 * @i_eof:  returns value of getline function
 * Return: (string input)
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
