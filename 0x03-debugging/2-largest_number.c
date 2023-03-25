#include <stdio.h>
#include "main.h"
/**
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		printf(largest = a);
	}
	else if (b > a && a >c)
	{
		printf(largest = b);
	}
	else
	{
		printf(largest = c);
	}

	return (largest);
}
