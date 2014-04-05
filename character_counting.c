#include <stdio.h>

/* It counts characters from input */
main() {
	int INPUT;
	int COUNTER = 0;

	while( ( INPUT = getchar() ) != EOF) 
		++COUNTER;

	if( COUNTER == 1 || COUNTER == 0) {
		printf("\nThere are %d character\n", COUNTER);
	}
	else {
		printf("\nThere are %d characters\n", COUNTER);
	}
}
