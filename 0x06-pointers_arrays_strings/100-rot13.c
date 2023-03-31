#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @x: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *x)
{
	int j, k;
	char y[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (j = 0; *(x + j); j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (y[k] == *(x + j))
			{
				*(x + j) = z[k];
				break;
			}
		}
	}
	return (x);
}
