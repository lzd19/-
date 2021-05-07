#include <stdio.h>
//指针就是个变量，变量指向地址，可以理解为指针就是地址  指针拿来存放地址
//int main()
//{
//	//printf("%d\n", sizeof(int*));4
//
//	//int a = 0x11223344;
//	//int* pa = &a; 
//	//char* pa = &a;
//	//*pa = 0;//整型：全部字节数0 char:改变一个字节 
//	//指针类型决定指针进行解引用操作的时候能够访问空间的大小
//	//int*p;*p能访问4个字节
//	//char*P;*P能够访问1个字节
//	//double*p;*p能够访问8个字节
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;
//	//printf("%d\n", pa);
//	//printf("%d\n", pa+1);//指针的类型决定了走一步走多远(单位是字节)
//
//	//printf("%d\n", pc);
//	//printf("%d\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名-首元素地址
//	char* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针：指向的位置不可知，随机，无限制。。。
//int main()
//{
//	//int a;//没有初始化，随机值
//	//int* p;//局部变量指针，初始化随机值
//	//*p=20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)//跃出了自已的管理范围；
//	{
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()//指针指向的空间被释放
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//1.初始化	NULL	2.小心指针越界	3.使用后可以设置NULL	4.使用前检查有效性

//指针运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[0]);//指针-指针=指针中间的个数
//
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//	return 0;
//}

//指针数组-数组-存放指针的数组
//数组指针-指针


