#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0) (Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
