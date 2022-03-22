#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 *@str: a pointer to an int that will be updated
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
