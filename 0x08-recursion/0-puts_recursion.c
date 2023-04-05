#include "main.h"
/**
 * _puts_recursion - Print a string followed by a new lien
 * @s: the string tp print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
