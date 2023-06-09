#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: passed string
 * @c: passed character
 *
 * Return: string from the first occ
 * if character is founded
 * NUll if not
 */
char *_strchr(char *s, char c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}
