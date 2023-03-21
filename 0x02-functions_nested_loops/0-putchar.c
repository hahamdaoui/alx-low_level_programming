#include "main.h"
#include <unistd.h>
/**
 * _puchar - A program will be printf this word _putchar
 *@c: The character to print

 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 *
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
