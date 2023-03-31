#include "main.h"
#include <string.h>
/**
 * _strncat - function to append som charz
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: Always string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
