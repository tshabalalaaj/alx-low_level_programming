#include <stdio.h>
#include <ctype.h>
/* Lowercase*/
int main(void)
{
	char c = 'H';
	char s = '\n';
	char result = tolower(c);
	putchar(result);
	putchar(s);
	return 0;
}
