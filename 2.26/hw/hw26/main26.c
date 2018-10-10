#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1%num2 == 0)
	{
		printf("%d是它的倍數", num1);
		if (num2%num1 == 0)
		{
			printf("%d是它的倍數", num2);

		}
	}
	else
	{
		printf("%d不是它的倍數", num1);
	}
	system("pause");
	return 0;
}