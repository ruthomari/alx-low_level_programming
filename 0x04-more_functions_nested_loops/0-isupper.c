#include "main.h"
/**
 * _isupper - checks uppercase characters
 * @c: function parameter
 * Return: 1 on succcess 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
