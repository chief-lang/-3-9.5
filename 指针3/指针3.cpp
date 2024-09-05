// 指针3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//指针也是有类型的，指针的类型就是定义的时候  类型*

#include <iostream>
#include<string.h>

int main()
{//常量字串符
	const char* p1 = "hello world";
	printf("%d\n", sizeof(p1));
	printf("%d\n", strlen(p1));
	p1 += 4;
	printf("%c\n", *p1);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double* p2 = (double*)&arr[0];
	p2++;//此时是double,所以是8个字节，移动两位
	char* p3 = (char*)&arr[0];
	p3 += 4;//char是一个字节，所以这里表示一共四个字节，移动一位
	printf("%d\n", *(int*)p2);
	return 0;
}
