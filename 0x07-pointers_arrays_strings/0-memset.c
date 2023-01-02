#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed
 *  with the constant b.
 *  @b: constant to fill memory with.
 *  @s: pointer to memory area.
 *  @n: bytes of the memory area to be filled.
 *
 *  Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}

