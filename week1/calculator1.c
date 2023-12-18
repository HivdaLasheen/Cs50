/*Addition with long*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	/*Prompt use for x */
	long x = get_long("x: ");

	/*Prompt use for y */
	long y = get_long("y: ");

	/*Perform addition*/
	printf("%i\n", x+y);
}
