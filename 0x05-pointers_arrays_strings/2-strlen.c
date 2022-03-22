#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: a pointer to an integer that will be updated
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a;

	a=0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a)
}
