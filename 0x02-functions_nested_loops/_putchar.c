#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print 
 * Return: success 1
 * Error, -1 is returned, an error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
