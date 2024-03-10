#include "main.h"

/**
 * get_sigint -  for your control + c
 * @sig: handles signal
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
