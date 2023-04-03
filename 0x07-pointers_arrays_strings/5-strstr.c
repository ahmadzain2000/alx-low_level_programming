#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates substring
 * @haystack: input string
 * @needle: input needles
 *
 * Return: returns a pointer to the
 * beginning of the located substring, else, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}
