#include "main.h"
/**
 * _putchar - writes a character to stout
 * @c: input character
 * Return: the character to print
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
