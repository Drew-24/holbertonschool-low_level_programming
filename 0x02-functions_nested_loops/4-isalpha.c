#include "main.h"
/**
 * _isalpha - function that cheks for alphabetic character
 * @c: variable
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
