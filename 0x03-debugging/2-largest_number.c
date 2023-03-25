#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * return: 0 (largest number)
 */

int largest_number(int a, int b, int c)
{
	int a, b, c;
	int largest;

	a = 972;
	b = 98;
	c = 0;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	if (a > b && b > c)
	{
		printf("largest = a");
	}
	else if (b > a && a > c)
	{
		printf("largest = b");
	}
	else
	{
		printf("largest = c");
	}

	return (0);
}
