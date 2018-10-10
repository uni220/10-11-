#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	scanf_s("%d", &num1);
	if (num1%2==0)
	{
		printf("%d是偶數", num1);
		
	}
	if (num1 % 2 != 0)
		{
			printf("%d是奇數", num1);
		}
	system("pause");
	return 0;
}