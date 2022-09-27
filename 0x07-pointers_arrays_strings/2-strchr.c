#include "main.h"

/***
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return:If c is found - a pointer to the first occurenece.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
