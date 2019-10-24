#include<stdio.h>
#include<stdlib.h>

int main() {
	float a, b, d;
	int c;
	while (1) {

		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)break;
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &c);
		d = a * b * c / 365;
		printf("The interest charge is $%.2f\n",d);




	}

	system("pause");
}