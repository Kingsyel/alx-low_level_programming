#include "main.h"

/**
 * _strcat - concatenates two strings
 *@dest: a ponter to char that is to be updated
 *@src: a pointer to a char that is to be updated
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
