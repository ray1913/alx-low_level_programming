#include <unistd.h>

/**
 * _putcharn - writes the charcater c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set apppopriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
