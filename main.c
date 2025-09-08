#include <stdio.h>

int fact(int);

int main() {
	printf("Hello Vova!\n");
	printf("fact(5) == %d\n", fact(5));
	printf("Goodbye Vova!\n");
	return 0;
}

int fact(int n) {
	int acc = 1;
	for (; n > 0; acc *= n--);
	return acc;
}
