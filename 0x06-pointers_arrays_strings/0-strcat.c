#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to 
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i; j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (srcc[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
