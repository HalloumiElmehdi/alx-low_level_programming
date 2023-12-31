#include <stdio.h>
/**
 * main - Entry point
 * finds and prints the sum of the even-valued terms
 * in a fibonacci sequence, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, n = 0;
	int sum = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
}
