#include <stdio.h>
#include <ctype.h>
/* Lowercase*/
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
	return 0;
}
