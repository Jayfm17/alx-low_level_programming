#include "main.h"
/**
* main - tests function that prints if integer is positive or negative.
* Return: 0
*/

int main(void)
{
	int i;

	i = 98;

	scanf("%d", &i);

	if (i >= 0)
	{
		printf(positive);
	}
	else
	{
		printf(negative);
	}
	return (0);
}
