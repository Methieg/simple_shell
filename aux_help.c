#include "main.h"

/**
 * aux_help_env - Help information for the builtin env
 * Return: (noting)
 */
void aux_help_env(void)
{
char *help = "env: env [option] [name=value] [command [args]]\n\t";

write(STDOUT_FILENO, help, _strlen(help));
help = "Print the enviroment of the shell.\n";
write(STDOUT_FILENO, help, _strlen(help));

}
/**
 * aux_help_setenv - Help information for the builtin setenv
 * Return: (nothing)
 */
void aux_help_setenv(void)
{

char *help = "setenv: setenv (const char *name, const char *value,";

write(STDOUT_FILENO, help, _strlen(help));
help = "\nint replace)\t\n";
write(STDOUT_FILENO, help, _strlen(help));
help = "\nAdd a new definition to the environment\n";
write(STDOUT_FILENO, help, _strlen(help));
}
/**
 * aux_help_unsetenv - Help information for the builtin unsetenv
 * Return: (nothing)
 */
void aux_help_unsetenv(void)
{
char *help = "\nunsetenv: unsetenv (const char *name)\t\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\nRemove entry completely from the environment\n";
write(STDOUT_FILENO, help, _strlen(help));
}


/**
 * aux_help_general - Entry point for help builtin info
 * Return: (nothing)
 */
void aux_help_general(void)
{
char *help = "\n^-^ bash, version 1.0(0)-release\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\nThese commands are defined internally.Type 'help' to see the list\n";
write(STDOUT_FILENO, help, _strlen(help));
help = "\nType 'help name' find out more about function 'name'.\n ";
write(STDOUT_FILENO, help, _strlen(help));
help = "\nalias: alias [name=['string']]\n cd: cd [-L|[-P [-e]] [-@]] ";
write(STDOUT_FILENO, help, _strlen(help));
help = "\n[dir]\nexit: exit [n]\n  env: env [option] [name=value] [command ";
write(STDOUT_FILENO, help, _strlen(help));
help = "\n[args]]\n  setenv: setenv [variable] [value]\n  unsetenv: ";
write(STDOUT_FILENO, help, _strlen(help));
help = "\nunsetenv [variable]\n";
write(STDOUT_FILENO, help, _strlen(help));
}
/**
 * aux_help_exit - information for the builtin exit
 * Return: (nothing)
 */
void aux_help_exit(void)
{
char *help = "\nexit: exit [n]\n Exit shell.\n";

write(STDOUT_FILENO, help, _strlen(help));
help = "\nExits the shell with a status of N. Else exit does not run";
write(STDOUT_FILENO, help, _strlen(help));
help = "\nstatus is that of the last command executed\n";
write(STDOUT_FILENO, help, _strlen(help));
}
