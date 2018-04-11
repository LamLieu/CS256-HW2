#include <stdio.h>

int main() {
	double ratePerYear = 1.5;
	double oceanLevel5Years = ratePerYear * 5;
	double oceanLevel7Years = ratePerYear * 7;
	double oceanLevel10Years = ratePerYear * 10;

	printf("In 5 years, the current ocean level will be %.1f mm higher than the current level.\n", oceanLevel5Years);
	printf("In 7 years, the current ocean level will be %.1f mm higher than the current level.\n", oceanLevel7Years);
	printf("In 10 years, the current ocean level will be %.1f mm higher than the current level.\n", oceanLevel10Years);
	return 0;
}
