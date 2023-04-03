#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *one = haystack;
	char *two = needle;

	for (; *haystack != 0; haystack++)
	{
		while (*one == *two && *two != 0)
		{
			one++;
			two++;
		}

		if (*two == 0)
			return (haystack);
	}
	return (NULL);
}
