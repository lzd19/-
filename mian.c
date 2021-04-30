
#include <stdio.h>
//int main()
//{
//	int a = 16;
//	int b= a >> 1;//>>右移操作符,移动二进制位:1.算术右移2.逻辑右移
//	//1.右边丢弃，左边补原符号位--通常是这个
//	//2.右边丢弃，补零
//
//
//	return 0;
//}
//整数二进制：原码，反码，补码，
//内存存到的是补码
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//1000000000000000000000000000000 -原码
//	//0111111111111111111111111111111 -补码
//	//1111111111111111111111111111111 -补码
//	return 0;
//}//左移操作符，移动后右边补零

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//第一种:可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after:%d %d", a, b);
//	//第二种:执行效率低，可读性低
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:%d %d", a, b);
//	return 0;
//}

//求一个整数存储在内存中1的二进制的个数
//int main()
//{
//
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//赋值操作符
//int main()
//{
//	short a[10] = { 0 };
//	printf("%d",sizeof a);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//不参与计算
//	printf("%d\n", s);
//	return 0;
//}

