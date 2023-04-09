#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stfdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned and errno is set appropriantely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
