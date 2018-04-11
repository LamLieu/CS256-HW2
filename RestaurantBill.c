#include <stdio.h>

int main() {
	double mealPrice = 88.67;
	double taxAmount = mealPrice *  .0675;
	double tipAmount = (mealPrice + taxAmount) * .2;
	double totalPrice = mealPrice + taxAmount + tipAmount;

	printf("The meal cost is: $%.2f\nThe tax amount is: $%.2f\nThe tip amount is: $%.2f\nThe total bill is: $%.2f\n",
			mealPrice, taxAmount, tipAmount,totalPrice);
	return 0;
}
