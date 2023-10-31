#define _CRT_SECURE_NO_WARNINGS

#include<io.h>
#include<stdio.h>


int main()
{
	double a,b,d;
	char c;
	int e=1;
	while(e)
	{ 

			printf("请输入第一个数字：");
			scanf("%lf", &a);
			printf("请输入第二个数字：");
			scanf("%lf", &b);
			printf("输入想要运算的法则(+,-,*,/)：");
			getchar();
			scanf("%c", &c);
			if (c == '+')
			{
				d = a + b;
				printf("结果为：%lf+%lf=%lf", a, b, d);
			}
			else if (c == '-')
			{
				d = a - b;
				printf("结果为：%lf-%lf=%lf", a, b, d);
			}
			else if (c == '*')
			{
				d = a * b;
				printf("结果为：%lf*%lf=%lf", a, b, d);
			}
			else if (c == '/')
			{
				d = a / b;
				printf("结果为：%lf/%lf=%lf", a, b, d);
			}
			printf("是否从新输入?从新按1，退出按0:");
			scanf("%d",&e);
			
		}
		


	return 0;
}
