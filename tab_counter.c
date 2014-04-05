#include <stdio.h>

/* This is a tab counting program written in C */
main () {
	int INPUT, COUNTER = 0;
	while ( ( INPUT = getchar() ) != EOF ) {
		if(INPUT == '\t') ++COUNTER;
	}
	printf("%d\n", COUNTER);
}  
