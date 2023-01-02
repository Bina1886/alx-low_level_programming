#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * fills the first n bytes of the memory area pointed
 *  with the constant b.
 *  @b: constant to fill memory with.
 *  @s: pointer to memory areai.
 *  @n: bytes of the memory area to be filled.
 *
 *  Return: pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
