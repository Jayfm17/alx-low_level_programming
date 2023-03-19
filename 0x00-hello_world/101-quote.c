#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Program that prints line in standard output without printf of puts
 * parameters: fput
 *
 * return: Always 1 (success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
