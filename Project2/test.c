//#include <stdio.h>
//int main()
//{
//	printf("Hello\tWorld\n\n");
//	return 0;
//}

//#include <stdio.h>
//
//#define LENGTH 10   
//#define WIDTH  5
//#define NEWLINE '\n'
//
//int main()
//{
//
//	int area;
//
//	area = LENGTH * WIDTH;
//	printf("value of area : %d", area);
//	printf("%c", NEWLINE);
//
//	return 0;
//}

//#include <stdio.h>
//
///* 函数声明 */
//void func1(void);
//
//static int count = 10;        /* 全局变量 - static 是默认的 */
//
//int main()
//{
//    while (count--) {
//        func1();
//    }
//    return 0;
//}
//
//void func1(void)
//{
//    /* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
//     * 每次调用函数 'func1' 'thingy' 值不会被重置。
//     */
//    static int thingy = 5;
//    thingy++;
//    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
//}

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h> 
//
///* 要生成和返回随机数的函数 */
//int* getRandom()
//{
//    static int r[10];
//    int i;
//
//    /* 设置种子 */
//    srand((unsigned)time(NULL));
//    for (i = 0; i < 10; ++i)
//    {
//        r[i] = rand();
//        printf("%d\n", r[i]);
//    }
//
//    return r;
//}
//
///* 要调用上面定义函数的主函数 */
//int main()
//{
//    /* 一个指向整数的指针 */
//    int* p;
//    int i;
//
//    p = getRandom();
//    for (i = 0; i < 10; i++)
//    {
//        printf("*(p + [%d]) : %d\n", i, *(p + i));
//    }
//
//    return 0;
//}

//可变参数
//#include <stdio.h>
//#include <stdarg.h>
//
//double average(int num, ...)
//{
//	va_list valist;
//	double sum = 0.0;
//	int i;
//	va_start(valist, num);
//	for (i = 0; i < num; i++)
//	{
//		sum += va_arg(valist, int);
//	}
//	va_end(valist);
//	return sum / num;
//}
//int main()
//{
//	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
//	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double rate = 0.025;
//	int n, i;
//	double capital, deposit = 0.0;
//	scanf("%d %lf", &n, &capital);
//	for (i = 0; i < n; i++)
//	{
//		capital *= 1.025;
//		deposit = capital;
//	}
//	printf("%lf\n", deposit);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	float x1, x2, m, n;
//	scanf("%d %d %d", &a, &b, &c);
//	n = b * b - 4*a*c;
//	m = sqrt(n);
//	x1 = ((-b) + m) / (2 * a);
//	x2 = ((-b) - m) / (2 * a);
//	printf("%f %f\n", x1, x2);
//	return 0;
//}

//#include <stdio.h>
//#define EPS 1e-6
//int main()
//{
//	double num;
//	scanf("%lf", &num);
//	if ((num - 0) <= EPS)
//	{
//		num = -num;
//	}
//	printf("%lf", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	if ((num % 2) != 0)
//	{
//		printf("It is odd number\n");
//	}
//	else
//	{
//		printf("It is even number\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int guess, aim;
//	aim = rand() % 100 + 1;
//	do
//	{
//		scanf("%d", &guess);
//		if (guess > aim)
//		{
//			printf("Too big\n");
//		}
//		else if (guess < aim)
//		{
//			printf("Too small\n");
//		}
//		else
//		{
//			printf("Right\n");
//		}
//	} while (guess != aim);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i;
//	double product = 1, part;
//	for (i = 2; i <= 100; i+=2)
//	{
//		part = (double)(i * i) / (double)((i - 1) * (i + 1));
//		product *= part;
//	}
//	printf("%lf\n", 2 * product);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 101; i += 2)
//	{
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double term, sum = 0, flag = 1, n = 1;
//	int count = 0;
//	do
//	{
//		term = flag / n;
//		sum += term;
//		flag = -flag;
//		n += 2;
//		count++;
//	} while (fabs(term) >= 1e-4);
//	printf("PI=%lf,count=%d\n", sum * 4, count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double term = 1, sum = 1, n = 1;
//	int count = 0;
//	do
//	{
//		term = term / n;
//		sum += term;
//		n++;
//		count++;
//	} while (fabs(term) >= 1e-5);
//	printf("e=%lf,count=%d\n", sum, count);
//	return 0;
//}

//#include <stdio.h>
//long Fact(int n)
//{
//	if (n < 0)
//	{
//		return -1;
//	}
//	else if (n == 0 || n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * Fact(n - 1));
//	}
//}
//int main()
//{
//	int n;
//	long result;
//	scanf("%d", &n);
//	result = Fact(n);
//	if (result == -1)
//	{
//		printf("error!\n");
//	}
//	else
//	{
//		printf("result=%ld\n", result);
//	}
//	return 0;
//}

//#include <stdio.h>
//int Fib(int n);
//int main()
//{
//	int n, i, x;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		x = Fib(i);
//		printf("%d\n", x);
//	}
//	return 0;
//}
//int Fib(int n)
//{
//	if (n == 1)
//	{
//		return 0;
//	}
//	else if (n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return (Fib(n - 1) + Fib(n - 2));
//	}
//}

//判断阿姆斯壮数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n, i = 0, m, result = 0, num;
//	scanf("%d", &n);
//	num = n;
//	do
//	{
//		i++;
//		n /= 10;
//	} while (n != 0);
//	while(num!=0)
//	{
//		m = num % 10;
//		result += pow(m, i);
//		num /= 10;
//	}
//	printf("%d\n", result);
//	return 0;
//}

//#include <stdio.h>
//void Sort(int s[], int n);
//int main()
//{
//	int s[40] = { 0 }, i = -1, n;
//	do
//	{
//		i++;
//		scanf("%d", &s[i]);
//	} while (s[i] >= 0);
//	n = i;
//	Sort(s, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", s[i]);
//	}
	/*for (i = 1; i < 40; i++)
	{
		if (score[0] < score[i])
		{
			temp = score[0];
			score[0] = score[i];
			score[i] = temp;
		}
	}
	printf("%d\n", score[0]);*/
//	return 0;
//}
//void Sort(int s[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (s[i] < s[j])
//			{
//				temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//		}
//	}
//}
//void Sort(int s[], int n)
//{
//	int i, j, k, temp;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (s[j] > s[k])
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			temp = s[i];
//			s[i] = s[k];
//			s[k] = temp;
//		}
//	}
//}

//#include <stdio.h>
//#define n 4
//int Output(int a[n][n]);
//int main()
//{
//	int i, j;
//	int a[n][n];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	Output(a);
//	return 0;
//}
//int Output(int a[n][n])
//{
//	int i = 0, msum = 0, ssum = 0;
//	for (i = 0; i < n; i++)
//	{
//		msum += a[i][i];
//		ssum += a[i][n - 1 - i];
//	}
//	printf("%d %d\n", msum, ssum);
//}

//#include <stdio.h>
//#define m 3
//#define n 4
//int Output(int a[m][n], int b[m][n], int c[m][n]);
//int main()
//{
//	int a[m][n], b[m][n], c[m][n];
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	Output(a, b, c);
//	return 0;
//}
//int Output(int a[m][n], int b[m][n], int c[m][n])
//{
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int MyStrlen(char s[]);
//int main()
//{
//	char s[20];
//	gets(s);
//	MyStrlen(s);
//	return 0;
//}
//int MyStrlen(char s[])
//{
//	int i, len = 0;
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		len++;
//	}
//	printf("%d\n", len);

//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	printf("%d\n", p - s);
//}

//#include <stdio.h>
//int MyStrcmp(char a[], char b[]);
//int main()
//{
//	char a[20], b[20];
//	int result;
//	gets(a);
//	gets(b);
//	result = MyStrcmp(a, b);
//	printf("%d\n", result);
//	return 0;
//}
//int MyStrcmp(char a[], char b[])
//{
//	int i;
//	for (i = 0; a[i] == b[i]; i++)
//	{
//		if (a[i] == '\0')
//		{
//			return 0;
//		}
//	}
//	return (a[i] - b[i]);
//}
//int MyStrcmp(char *pa, char *pb)
//{
//	for (; *pa == *pb; pa++, pb++)
//	{
//		if (*pa == '\0')
//		{
//			return 0;
//		}
//	}
//	return (*pa - *pb);
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[20] = "mamimamihong", userInput[20];
//	scanf("%s", &userInput);
//	if (strcmp(password, userInput) == 0)
//	{
//		printf("Correct!\n");
//	}
//	else if (strcmp(password, userInput) < 0)
//	{
//		printf("big!\n");
//	}
//	else
//	{
//		printf("small!\n");
//	}
//	return 0;
//}