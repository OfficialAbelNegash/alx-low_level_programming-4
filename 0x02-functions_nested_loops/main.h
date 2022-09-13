#include <stdlib.h>
#include <stdio.h>

/**
 * simple_write: writes to standard output
 * 
 * Description: Doesn't use the standard library. Uses fwrite.
 * Result: 0 (success) and 1 (failure)
 */

void simple_write(char text[], int len)
{
	int i;
	
	for(i = 0; i < len; i++)
	{
		fwrite(&text[i], sizeof(text[i]), 1, stdout);
	}
}
