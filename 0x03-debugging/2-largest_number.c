#include "main.h"

/**
 * Largest_number - returns the Largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */

int Largest_number(int a, int b, int c)
{
	int Largest;

	if (a > b && a > c)
	{
		Largest = a;
	}
	else if (b > c)
	{
		Largest = b;
	}
	else
	{
		Largest = c;
	}

	return (Largest);
}
