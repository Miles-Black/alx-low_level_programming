#include "main.h"
/**
 * _strncy - c function that copies a string, imcluding the 
 * terminating null byte, using at most an inputted number of bytes.
 * if the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filling with null
 * worked identified to the standard library function 'strncpy'
 * @dest: buffer stroing the string copy
 * @src: the sourcestring
 * @n: max number of byte copied
 * return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src [i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
		
