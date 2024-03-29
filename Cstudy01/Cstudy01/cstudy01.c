#define _CRT_SECURE_NO_WARNINGS 1

//通讯录-静态版本
//1.通讯录中能够存放1000个人的信息
//每个人的信息：
//名字+年龄+性别+电话+地址
//2. 增加人的信息
//3. 删除指定人的信息
//4. 修改指定人的信息
//5. 查找指定人的信息
//6. 排序通讯录的信息
//
//版本2：
//动态增长的版本
//1>通讯录初始化后，能存放3个人的信息
//2>当我们空间的存放满的时候，我们增加2个信息
//3+2+2+2+...
//

//
//版本3
//当通讯录退出的时候，把信息写到文件
//当通讯录初始化的时候，加载文件的信息到通讯录中
//

#include "contact.h"

void menu()
{
	printf("*****************************\n");
	printf("******1.add    2.del*********\n");
	printf("******3.search 4.modify******\n");
	printf("******5.sort   6.print*******\n");
	printf("******0.exit          *******\n");
	printf("*****************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创
	Contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
				AddContact(&con);
				break;
		case DEL:
				DelContact(&con);
				break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestoryContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}