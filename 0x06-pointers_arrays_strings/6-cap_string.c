#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @x: input string
 * Return: returns pointer to dest.
 */
char *cap_string(char *x)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(x + count) >= 97 && *(x + count) <= 122)
		*(x + count) = *(x + count) - 32;
	count++;
	while (*(x + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(x + count) == sep_words[i])
			{
				if ((*(x + (count + 1)) >= 97) && (*(x + (count + 1)) <= 122))
					*(x + (count + 1)) = *(x + (count + 1)) - 32;

				break;
			}
		}
		count++;
	}
	return (x);
}
