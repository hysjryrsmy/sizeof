#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof 计算的变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(a));//4  ；  计算变量的时候可以省略括号 sizeof a
	printf("%d\n", sizeof(int));// 通过类型计算大小； 计算类型的时候不可以省略括号

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));

	printf("%d\n", sizeof(arr));//40 ；10*4
	printf("%d\n", sizeof(int [10]));

	return 0;
}

int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5)); //结果是：2  ；  sizeof内部不参加运算
	printf("%d\n", s); //结果是：0
	return 0;
}
*/

#include <stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr));
	test1(arr);
	test2(ch);
	return 0;
}