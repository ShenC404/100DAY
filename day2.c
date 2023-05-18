#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("-----欢迎来到“简单到不能再简单”记录系统！-----\n");
	printf("--------------目前的版本是v.0.1~--------------\n");
	printf("-----请输入当前需要达成的目标量并按下回车-----\n");
	scanf("%d", &d);
	printf("-------------------录入完成-------------------\n");
	printf("-注意：本系统需手动记录！关闭系统记录自动销毁-\n");

	while (a<d)
	{
		scanf("%d", &b);
		printf("已记录\n");
		c++;
		printf("记录了%d次\n",c);
		a = a + b;
	}
	if(a>=d)
	{
		printf("恭喜！任务完成！\n");
	}
	return 0;
}