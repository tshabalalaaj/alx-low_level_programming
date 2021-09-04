#include <stdio.h>
#include <ctype.h>
/**
 * Main - Prints lowercse alphabets
 * Return - Returns 0 for successfull
 */
int main(void)
{
	char c;
	char s = '\n';

	for (c = 65; c <= 90; c++)
	{
	char result = tolower(c);

	putchar(result);
	}
	putchar(s);

	return (0);
}
