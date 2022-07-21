#include <stdio.h>

//输出三角
//int main()
//{
//	int i, j;
//	char input, beging = 'A';
//	scanf("%c", &input);
//	for (i = input-'A'+1; i >= 1; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%c ", beging);
//		}
//		beging++;
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf("  ");
//		}
//		for (k = 1; k <= (2 * i - 1); k++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j, k, m, n, count, num;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		count = i;
//		num = 2 * (i - 1);
//		for (j = 1; j <= n - i; j++)
//		{
//			printf("  ");
//		}
//		for (k = 1; k <= i; k++)
//		{
//			printf("%d ", count);
//			count++;
//		}
//		for (m = 1; m < i; m++)
//		{
//			printf("%d ", num);
//			num--;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//按10*10矩阵输出1-100
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%3d ", i);
//		if (i % 10 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//输出等差数列
//int main() 
//{
//    int i, j, count;
//    int start, end;
//
//    start = 2, end = 10;
//
//    for (i = start; i <= end; i++)
//    {
//        count = i;
//
//        for (j = 1; j <= 10; j++) 
//        {
//            printf(" %3d", count * j);
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//#define N 50
//int main()
//{
//	int i, j, k, n, a[N][N];
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a[i][1] = a[i][i] = 1;
//	}
//	for (i = 3; i <= n; i++)
//	{
//
//		for (k = 2; k <= i-1; k++)
//		{
//			a[i][k] = a[i - 1][k - 1] + a[i - 1][k];
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf("  ");
//		}
//		for (k = 1; k <= i; k++)
//		{
//			printf("%4d", a[i][k]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j, k=1,n;
//	scanf("%d", &n);
//	for (i = 1,k=1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", k);
//			k++;
//		}
//		printf("\n");
//	}
//	return 0;
//} 

//十进制与二进制的相互转换
//long long convertDecimalToBinary(int n);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%lld\n", convertDecimalToBinary(n));
//	return 0;
//}
//long long convertDecimalToBinary(int n)
//{
//	long long binarynumber = 0;
//	int remainder, i = 1;
//	while (n != 0)
//	{
//		remainder = n % 2;
//		n /= 2;
//		binarynumber += remainder * i;
//		i *= 10;
//	}
//	return binarynumber;
//}

//#include <math.h>
//int convertBinaryToDecimal(long long n);
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	printf("%d\n", convertBinaryToDecimal(n));
//	return 0;
//}
//int convertBinaryToDecimal(long long n)
//{
//	int i = 0, remainder, decimalnumber = 0;
//	while (n != 0)
//	{
//		remainder = n % 10;
//		decimalnumber += remainder * pow(2, i);
//		n /= 10;
//		i++;
//	}
//	return decimalnumber;
//}

//字符串翻转
// 字符数组
//#include <string.h>
//char* reverseStr(char* str);
//int main()
//{
//	char str[40];
//	scanf("%s", str);
//	printf("%s\n", reverseStr(str));
//	return 0;
//}
//char* reverseStr(char* str)
//{
//	int i = 0;
//	int j = strlen(str) - 1;
//	char temp;
//	while (i < j)
//	{
//		temp = *(str + i);
//		*(str + i) = *(str + j);
//		*(str + j) = temp;
//		i++;
//		j--;
//	}
//	return str;
//}

//将一个数组拆分为两个数组，一个为奇数数组，一个为偶数数组：
//int main()
//{
//	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int even[10], odd[10];
//	int i, e, o;
//	e = o = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (array[i] % 2 == 0)
//		{
//			even[e] = array[i];
//			e++;
//		}
//		else
//		{
//			odd[o] = array[i];
//			o++;
//		}
//	}
//	for (i = 0; i < e; i++)
//	{
//		printf("%d ", even[i]);
//	}
//	printf("\n");
//	for (i = 0; i < o; i++)
//	{
//		printf("%d ", odd[i]);
//	}
//	return 0;
//}

//删除字符串中的特殊字符
//int main()
//{
//    char line[150];
//    int i, j;
//    printf("输入一个字符串: ");
//    fgets(line, (sizeof line / sizeof line[0]), stdin);
//
//    for (i = 0; line[i] != '\0'; ++i)
//    {
//        while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
//        {
//            for (j = i; line[j] != '\0'; ++j)
//            {
//                line[j] = line[j + 1];
//            }
//            line[j] = '\0';
//        }
//    }
//    printf("输出: ");
//    puts(line);
//    return 0;
//}


//#include <stdlib.h>
//#include <string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test2()
//{
//	int i;
//	struct Stu s[3] = {{ "zhangsan",20 }, { "lisi",30 }, { "wangwu",10 }};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", s[i].name,s[i].age);
//	}
//}

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test3()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//		int i;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//int main()
//{
	//test1();
	//test2();
//	test3();
//	return 0;
//}


//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	//my_strcpy(arr1, arr2);
//	//my_strcat(arr1, arr2);
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	//printf("%s\n", arr1);
//	return 0;
//}


//#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*p1)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbcdefghi";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}


//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}


//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest > src)
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr3 + 2, arr3, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5];
//	int i = 0;
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


