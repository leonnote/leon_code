#define _CRT_SECURE_NO_WARNINGS 1

//���ҳ������� 100+100*0.9+100*0.9*0.9+......
#include <stdio.h>

void main()
{
	int money, persent, i, sum=0;
	printf("���������ʽ�:>\n");
	scanf("%d", &money);
	printf("������ٷ���:>\n");
	scanf("%d", &persent);
	do
	{
		sum += money;
		money = money*persent/100;

	} while (money > 1);

	printf("���ҳ���Ϊ:>%d",sum);
}
