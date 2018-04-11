#include <stdio.h>

void PatternA();
void PatternB();

int main() {
	printf("This is pattern A:\n");
	PatternA();

	printf("This is pattern B:\n");
	PatternB();
}

void PatternA() {
	for(int i = 1; i <= 10; i++) {
		int j = 0;
		do {
			printf("*");
			j++;
		} while (j < i);
		printf("\n");
	}
}

void PatternB() {
	for(int i = 9; i > 0; i--) {
		int j = 0;
		do {
			printf("*");
			j++;
		} while (j < i);
		printf("\n");
	}
}
