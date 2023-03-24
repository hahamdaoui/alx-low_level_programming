#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: 0 (success)
 */

void print_number(int n)
{
	unsigned int N = n;

	if (n < 0)
	{
		_putchar('-');
		N = -N;
	}
	if ((N / 10) > 0)
		print_number(N / 10);
	_putchar((N % 10) + '0');
}
