#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double C;
	scanf_s("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
	C = a / c * b + d + e;
	printf("�C�Ѷ}���W�Z����O%lf", C);
	system("pause");
	return 0;
}