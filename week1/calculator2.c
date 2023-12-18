/*Division with longs, demonstrating truncation*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	/*prompt user for x */
	long x = get_long("x: ");

	/*Prompt user for y */
	long y = get_long("y: ");

	/*Divide x by y */
	printf("%i\n", x/y);
}
