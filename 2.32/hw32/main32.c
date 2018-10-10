#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double num1;
	double num2;
	double num3;
	double C;
	scanf_s("%lf%lf%lf", &num1, &num2, &num3);
	C=num1 / (num2/100*num3/100);
	printf("BMI is %lf\n",C);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("pause");
	return 0;
}