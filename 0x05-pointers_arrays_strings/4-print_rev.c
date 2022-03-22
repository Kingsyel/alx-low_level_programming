#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer to an int that will be updated
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i -1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
