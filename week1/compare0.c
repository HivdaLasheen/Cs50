/*Conditionals, Boolean expressions, relational operators**/
#include <cs50.h>
#include <stdio.h>

int main(void){
	/*Prompt user for integers*/
	int x = get_int("What's x?");
	int y = get_int("What's y?");

	/*Compare Integers*/
	if (x < y){
		printf("x is less than y\n");
	}
}
