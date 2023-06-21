#include <unistd.h>
/**
 * _putchar - writes a character to stout
 * @c: input character
 * Return: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
