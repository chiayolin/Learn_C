#include <stdio.h>

// Copy input to output;
// 1st version;
main () {
int character;

character = getchar();
while (character != EOF) {
	putchar(character);
	character = getchar();
}
}
