#define _CRT_SECURE_NO_WARNINGS 1

//货币乘数计算 100+100*0.9+100*0.9*0.9+......
#include <stdio.h>

void main()
{
	int money, persent, i, sum=0;
	printf("请输入总资金:>\n");
	scanf("%d", &money);
	printf("请输入百分率:>\n");
	scanf("%d", &persent);
	do
	{
		sum += money;
		money = money*persent/100;

	} while (money > 1);

	printf("货币乘数为:>%d",sum);
}
