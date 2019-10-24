#include<stdio.h>
#include<stdlib.h>

int main() {
	while (1) {


		float a;
		printf("Enter sales in dollar(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)break;
		a = 0.09 * a + 200;
		printf("Salary is:%.2f\n",a);
		
		

	}
	system("pause");
}