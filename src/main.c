#include <stdio.h>
#include <string.h>
//C语言是一种结构化 的程序语言
//顺序 循环 选择 结构
//#define MAX 100 定义全局变量
 
//#define MAX(x,y) (x>y?x:y) 定义宏


struct Book
{
	char name[20];
	int price;
};
int main()
{

	// int a =10;
	// int b =20;
	// int max = MAX(a,b);
	// printf("%d\n",max);

	// int a = 10;//四个字节
	// int* p = &a;//取地址
	// printf("%p\n",&a);
	// printf("%p\n",p);
	// *p = 20;
	// printf("a=%d\n",a);

	// char ph = 'w';
	// char* x = &ph;
	// //地址的大小是8byte
	// printf("%d\n",sizeof(x));
	// *x = 'z';
	// printf("%p\n",ph);

	// int a = 10;
	// int* p = &a;
	// printf("%p\n",p);
	// printf("%p\n",&a);
	// *p = 20;
	// printf("a=%d\n",a);

	// struct Book b1 = {"c语言程序设计",20};
	// printf("书名:%s\n",b1.name);
	// printf("价格:%d元\n",b1.price);

	// struct Book* pb = &b1;
	// printf("%s\n",(*pb).name);//指针
	// printf("%d\n",(*pb).price);
	// printf("---------利用bp打印出我的书名和价格\n");
	// printf("%s\n",pb->name);
	// printf("%d\n",pb->price);

	//判断一个数是不是基数
	// int a;
	// scanf("%d",&a);
	// if (a%2==0)
	// {
	// 	printf("%d是基数\n",a);
	// }else{
	// 	printf("%d不是基数\n",a);
	// }
	
	//循环相加100内所有的基数
	// int i = 1;
	// int sum = 0;
	// while (i<=100)
	// {
	// 	if (i%2==1)
	// 		printf("%d\n",i);
	// 	i++;
	// 	sum+=i;
		
	// }
	// printf("%d\n",sum);


	//switch语句

	// int day = 0;
	// scanf("%d",&day);
	// switch (day)
	// {
	// case 1:
	// 	printf("星期%d:",day);
	// 	break;
	// case 2:
	// 	printf("星期%d:",day);
	// 	break;
	// }
	//welcome to bit !!!!!!!

	// char arr[] = "welcome to bit !!!!!";
	
	// int initial = 1;

	// int num = sizeof(arr)-3;

	// for (int i = 0; i < sizeof(arr)/2; i++)
	// {
	// 	for (size_t i = 0; i < initial; i++)
	// 	{
	// 		printf("%c",arr[i]);
	// 	}
	// 	for (int i =num; i > 0; i--)
	// 	{
	// 		printf("#");
	// 	}
	// 	for (int i = sizeof(arr)-initial-1; i < sizeof(arr)-1; i++)
	// 	{
	// 		printf("%c",arr[i]);
	// 	}
	// 	printf("\n");
	// 	num-=2;
	// 	initial++;
	// }
	
	//printf("%c",arr[0]);
	// WHAT I WRITE IS SHIT!!!! 

	// char arr1[]="welcome to bit !!!!!";
	// char arr2[]="####################";
	// char arr3[]="123";
	
	// for (size_t i = 0; i < sizeof(arr1); i++)
	// {
	// 	printf("%c",arr1[i]);
	// 	/* code */
	// }
	
	// int right = 0;
	// int left = sizeof(arr1)-2;

	// printf("%c\n",arr1[right]);
	// printf("%c\n",arr1[left]);
	

//编写代码实现 用户输入密码如果密码正确 就 进入程序如果错误 就退出 只有三次机会

int i = 0;
char password[20] = {0};
for (i = 0; i < 3; i++)
{
	printf("请输入密码:>");
	
	scanf("%s",password);

	if (strcmp(password,"123456") == 0)
	{
		printf("密码正确");
		break;
	}
	
}
if (i==3)
	printf("三次密码错误退出\n");
	return (0);
}


//==不能比较两个字符串是否相等，应该使用一个库函数，strcmp