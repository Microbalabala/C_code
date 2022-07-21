//#include <stdio.h>
//int main()
//{
//	int year, month, day, allDay, m;
//	int i;
//	while (scanf("%d %d %d", &year, &month, &day)!=EOF)
//	{
//	allDay = 0;
//	for (i = 1; i < year; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			allDay += 366;
//		}
//		else
//		{
//			allDay += 365;
//		}
//	}
//	for (i = 1; i < month; i++)
//	{
//		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//		{
//			allDay += 31;
//		}
//		else if (i == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			{
//				allDay += 29;
//			}
//			else
//			{
//				allDay += 28;
//			}
//		}
//		else
//		{
//			allDay += 30;
//		}
//	}
//	allDay += day;
//	m = allDay % 7;
//	switch (m)
//	{
//	case 0: printf("Sunday\n"); break;
//	case 1: printf("Monday\n"); break;
//	case 2: printf("Tuesday\n"); break;
//	case 3: printf("Wednesday\n"); break;
//	case 4: printf("Thursday\n"); break;
//	case 5: printf("Friday\n"); break;
//	case 6: printf("Saturday\n"); break;
//	}
//}
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//int num1(char a[])//num1和num2函数是一样的，构造两个函数主要是为了将输入的两个数字分清楚。目的将字符换为数字
//{
//    if (strcmp(a, "one") == 0)
//        return 1;
//    else if (strcmp(a, "two") == 0)
//        return 2;
//    else if (strcmp(a, "three") == 0)
//        return 3;
//    else if (strcmp(a, "four") == 0)
//        return 4;
//    else if (strcmp(a, "five") == 0)
//        return 5;
//    else if (strcmp(a, "six") == 0)
//        return 6;
//    else if (strcmp(a, "seven") == 0)
//        return 7;
//    else if (strcmp(a, "eight") == 0)
//        return 8;
//    else if (strcmp(a, "nine") == 0)
//        return 9;
//    else if (strcmp(a, "zero") == 0)
//        return 0;
//}
//int num2(char a[])
//{
//    if (strcmp(a, "one") == 0)
//        return 1;
//    else if (strcmp(a, "two") == 0)
//        return 2;
//    else if (strcmp(a, "three") == 0)
//        return 3;
//    else if (strcmp(a, "four") == 0)
//        return 4;
//    else if (strcmp(a, "five") == 0)
//        return 5;
//    else if (strcmp(a, "six") == 0)
//        return 6;
//    else if (strcmp(a, "seven") == 0)
//        return 7;
//    else if (strcmp(a, "eight") == 0)
//        return 8;
//    else if (strcmp(a, "nine") == 0)
//        return 9;
//    else if (strcmp(a, "zero") == 0)
//        return 0;
//}
//int main()//注意题的前提是两个小于100的数，意思就是两个两位数
//{
//
//    char a[20];//这里的a数组不止指代输入的字符串，还有“+”和“=”，“ ”等
//    int num1(char a[]);
//    int num2(char a[]);
//    while (1)
//    {
//        int sum = 0, sum1 = 0, sum2 = 0;
//        scanf("%s", a);//这里a是第一个字符串
//        sum1 = num1(a);//将字符换为数字
//        scanf("%s", a);//输入第二个字符串
//        if (strcmp(a, "+") != 0)//判断第二个字符串是否是"+"，即判断第一个数字是否是两位数
//        {
//            sum1 = sum1 * 10 + num1(a);//不是加号则第一个数字是两位数
//            scanf("%s", a);//这里a是“ ”
//        }
//        scanf("%s", a);
//        sum2 = num2(a);
//        scanf("%s", a);
//        if (strcmp(a, "=") != 0)
//        {
//            sum2 = sum2 * 10 + num2(a);
//            scanf("%s", a);
//        }
//        sum = sum1 + sum2;
//        if (sum == 0)
//            return 0;//即sum1==0&&sum2==0
//        else
//            printf("%d\n", sum);
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int n, i;
//	char a[100];
//	char c[26];
//	for (i = 0; i < 26; i++)
//	{
//		c[i] = 'a' + i;
//	}
//	while (~scanf("%d", &n))
//	{
//		int b[26] = { 0 };
//		int max = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%c", &a[i]);
//		}
//		getchar();
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 26; j++)
//			{
//				if (a[i] == c[j])
//				{
//					b[j]++;
//				}
//			}
//		}
//		for (i = 0; i < 26; i++)
//		{
//			if (b[i] > b[0])
//			{
//				b[0] = b[i];
//				max = i;
//			}
//		}
//		printf("c\n", c[max]);
//	}
//	return 0;
//}


//#include <stdio.h>
//void sort(int a[], int N)
//{
//	int i, j, temp;
//	for (i = 0; i < N-1; i++)
//	{
//		for (j = 0; j < N-1-i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//int search(int a[], int N, int s)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		if (a[i] == s)
//		{
//			return i + 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int N, m, i, a[50];
//	void sort(int a[], int N);
//	int search(int a[], int N, int s);
//	scanf("%d", &N);
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &m);
//	sort(a, N);
//	for (i = 0; i < N; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf(" %d\n", a[i]);
//		}
//		else if (i % 10 == 0)
//		{
//			printf("%d", a[i]);
//		}
//		else
//		{
//			printf(" %d", a[i]);
//		}
//	}
//	printf("\n");
//	if (!search(a, N, m))
//	{
//		printf("no this score!\n");
//	}
//	else
//	{
//		printf("%d\n", search(a, N, m));
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
float aver[50];
int N, k = 0;
int main() 
{
    void avescore(int s[], int n);                //求每个学生的平均成绩
    void avecourse(int** p, int x);               //求下标为x(1~5)的课程的平均成绩 
    int i, j;
    int** ptr_s;
    scanf("%d", &N);
    ptr_s = (int**)malloc(N * sizeof(int*));
    if (ptr_s == NULL) return 0;
    for (i = 0; i < N; i++) 
    {
        ptr_s[i] = (int*)malloc(6 * sizeof(int*));
        if (ptr_s[i] == NULL) return 0;
    }
    //输入N个（行）学生信息 
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < 6; j++) {
            scanf("%d", *(ptr_s + i) + j);        //&ptr_s[i][j]
        }
    }
    for (i = 0; i < N; i++) 
    {                     //求每个学生平均分 
        avescore(ptr_s[i], 5);
    }
    /* 输出所有人信息和各自平均分 */
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < 6; j++) 
        {
            printf("%d ", *(*(ptr_s + i) + j));   //ptr_s[i][j]
        }
        printf("%3.1f\n", *(aver + i));          //aver[i]
    }
    for (i = 1; i <= 5; i++)
    {                     //求每门课程平均成绩并打印 
        avecourse(ptr_s, i);
    }
    return 0;
}
void avescore(int s[], int n) 
{
    int i;
    float sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += s[i];
    }
    aver[k++] = sum / n;
}
void avecourse(int** p, int x) 
{
    int i;
    float sum = 0;
    for (i = 0; i < N; i++) 
    {
        sum += (float)*(*(p + i) + x);
    }
    if (x != 5) {
        printf("%3.1f ", sum / (float)N);
    }
    else {
        printf("%3.1f\n", sum / (float)N);
    }
}