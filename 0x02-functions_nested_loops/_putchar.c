#include "main.h"
#include <unistd.h>
/**
 * _putchar - writed the character c to stdout
 * &c: The character to print
 *
 * return: on success return 1.
 * on error, -1 is returned, and error is returned appropriately
 */
int _putchar(char c)
	(
	 return (write(1, &c, 1));
	)
