#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 * Return: The lenght of the string
 */
int _strlen_recursion(char *s)
{
	int longgit = 0;

	if (*s)
	{
		longgit++;
		longgit += _strlen_recursion(s + 1);
	}
	return (longgit);
}
