#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* get a random number assign it to n
 * check if number in n is greater than zero
 *  if true print is positive
 * else if number in n is less than zero
 *  if true print is negative
 * else if number in n is equal to zero 
 *  if true print is zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	{
		printf("is positive\n");
	}
	else if (n==0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
