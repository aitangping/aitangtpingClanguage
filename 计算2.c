int main()
{
	double a, b, c;
	char d;
	int x=1;
	printf("请输入：");
	scanf("%lf", &a);
	while (x)
	{
		printf("请选择运算符号（+，-，*，/）：");
		getchar();
		scanf("%c", &d);
		printf("请继续输入：");
		scanf("%lf", &b);

		if (d == '+')
		{
			if (a == (int)a)
			{
				printf("%d+", (int)a);
			}
			else
			{
				printf("%lf+", a);
			}
			if(b==(int)b)
			{
				printf("%d", (int)b);
			}
			else
			{
				printf("%lf", b);
			}
			a +=b;
			
		}
		else if (d == '-')
		{

			if (a == (int)a)
			{
				printf("%d-", (int)a);
			}
			else
			{
				printf("%lf+", a);
			}
			if (b == (int)b)
			{
				printf("%d", (int)b);
			}
			else
			{
				printf("%lf", b);
			}
			a -= b;
			
		}
		else if (d == '*')
		{
			if (a == (int)a)
			{
				printf("%d*", (int)a);
			}
			else
			{
				printf("%lf+", a);
			}
			if (b == (int)b)
			{
				printf("%d", (int)b);
			}
			else
			{
				printf("%lf", b);
			}
			a *= b;
			
		}
		else if (d == '/')
		{
			if (a == (int)a)
			{
				printf("%d/", (int)a);
			}
			else
			{
				printf("%lf+", a);
			}
			if (b == (int)b)
			{
				printf("%d", (int)b);
			}
			else
			{
				printf("%lf", b);
			}
			a /= b;
			
		}
		if (a == (int)a)
		{
			a = (int)a;
			printf("结果为：%d\n",(int)a);
		}
		else
		{
			a = a;
			printf("结果为：%lf\n",a);
		}
		
		printf("是否继续运算？继续按1，结束按0：");
		scanf("%d", &x);

	}
	return 0;
}
