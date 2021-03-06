#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int idx, idx2, len, len2;
	int add = 0;
	char *start;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	add = len + len2;

	start = malloc((add + 1) * sizeof(char));
	if (start == NULL)
		return (NULL);

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		start[idx] = s1[idx];
	}
	for (idx2 = 0; s2[idx2] != '\0'; idx2++)
	{
		start[idx] = s2[idx2];
		idx++;
	}
	start[idx] = '\0';
	return (start);
}
