#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the characters c to stdout
 * @c: the character to print
 * Return: on success l.
 * On error, -l is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
