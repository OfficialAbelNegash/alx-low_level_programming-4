#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: Pointer var 1
 * @src: Pointer var 2
 *
 * Description: Add question here
 * Return: 0 (success) and 1 (failure) to execute
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (*(dest + i))
        {
                i++;
        }

	*(dest + i) = '\0';

	return (dest);
}

