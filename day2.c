#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("-----��ӭ�������򵥵������ټ򵥡���¼ϵͳ��-----\n");
	printf("--------------Ŀǰ�İ汾��v.0.1~--------------\n");
	printf("-----�����뵱ǰ��Ҫ��ɵ�Ŀ���������»س�-----\n");
	scanf("%d", &d);
	printf("-------------------¼�����-------------------\n");
	printf("-ע�⣺��ϵͳ���ֶ���¼���ر�ϵͳ��¼�Զ�����-\n");

	while (a<d)
	{
		scanf("%d", &b);
		printf("�Ѽ�¼\n");
		c++;
		printf("��¼��%d��\n",c);
		a = a + b;
	}
	if(a>=d)
	{
		printf("��ϲ��������ɣ�\n");
	}
	return 0;
}