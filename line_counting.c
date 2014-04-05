#include <stdio.h>

/* count lines in input */
main () {
	int INPUT;
	int COUNTER_LINE = 0;
	
	while( ( INPUT = getchar() ) != EOF) {
		if(INPUT == '\n') ++COUNTER_LINE;
	}

	printf("Lines = %d\n", COUNTER_LINE);
}

