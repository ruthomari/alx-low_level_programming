#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters
 * @s: analysed string
 * Return: strings with all letters uppercased
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s  i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}
