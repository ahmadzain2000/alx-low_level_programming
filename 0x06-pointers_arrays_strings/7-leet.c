#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @x: input string.
 * Return: the pointer to dest.
 */
char *leet(char *x)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(x + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(x + count) == low_letters[i] || *(x + count) == upp_letters[i])
			{
				*(x + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (x);
}
