#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: program prints file using putchar
 * parameters: putchar
 *
 * return: on success return 1.
 * on error, -1 is returned
 */
int _putchar(char c)
	(
	 return (write(1, &c, 1));
	)
