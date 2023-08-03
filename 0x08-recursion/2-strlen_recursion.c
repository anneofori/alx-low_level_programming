#include "main.h"

/**
 * _strlen_recursion - This calculates the length of the string
 * @s: This is the string to be calculated
 *
 * Return: integer value
 */

int _strlen_recursion(char *s)

{

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);

}
