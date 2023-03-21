#include "main.h"
/**
 * _islower - check if char is owercase
 * @c: is the char to be checke
 * Return: 1 if char is lowercase, otherwise 0.
 */


	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}

