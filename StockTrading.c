#include <stdio.h>

int main () {
	double paidPrice = 45.5;
	int numberOfShares = 1000;
	double soldPrice = 56.9;
	double stockCommissionPaidPrice = paidPrice * .02 * numberOfShares;
	double stockCommissionSoldPrice = soldPrice * .02 * numberOfShares;
	double totalPaidPrice = numberOfShares * paidPrice;
	double totalSoldPrice = numberOfShares * soldPrice;
	double totalStockBrokerCommission = stockCommissionPaidPrice + stockCommissionSoldPrice;
	double profit = totalSoldPrice - totalPaidPrice - totalStockBrokerCommission;

	printf("The amount of money Joe paid for the stock is: $%.2f\n", totalPaidPrice);
	printf("The amount of commission Joe paid his broker when he bought the stock is: $%.2f\n", stockCommissionPaidPrice);
	printf("The amount that Joe sold the stock for is: $%.2f\n", totalSoldPrice);
	printf("The amount of commission Joe paid his broker when he sold the stock is: $%.2f\n", stockCommissionSoldPrice);
	printf("The amount of profit Joe made is: $%.2f\n", profit);

	return 0;
}
