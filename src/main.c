#include <stdio.h>
#include <string.h>
//C������һ�ֽṹ�� �ĳ�������
//˳�� ѭ�� ѡ�� �ṹ
//#define MAX 100 ����ȫ�ֱ���
 
//#define MAX(x,y) (x>y?x:y) �����


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

	// int a = 10;//�ĸ��ֽ�
	// int* p = &a;//ȡ��ַ
	// printf("%p\n",&a);
	// printf("%p\n",p);
	// *p = 20;
	// printf("a=%d\n",a);

	// char ph = 'w';
	// char* x = &ph;
	// //��ַ�Ĵ�С��8byte
	// printf("%d\n",sizeof(x));
	// *x = 'z';
	// printf("%p\n",ph);

	// int a = 10;
	// int* p = &a;
	// printf("%p\n",p);
	// printf("%p\n",&a);
	// *p = 20;
	// printf("a=%d\n",a);

	// struct Book b1 = {"c���Գ������",20};
	// printf("����:%s\n",b1.name);
	// printf("�۸�:%dԪ\n",b1.price);

	// struct Book* pb = &b1;
	// printf("%s\n",(*pb).name);//ָ��
	// printf("%d\n",(*pb).price);
	// printf("---------����bp��ӡ���ҵ������ͼ۸�\n");
	// printf("%s\n",pb->name);
	// printf("%d\n",pb->price);

	//�ж�һ�����ǲ��ǻ���
	// int a;
	// scanf("%d",&a);
	// if (a%2==0)
	// {
	// 	printf("%d�ǻ���\n",a);
	// }else{
	// 	printf("%d���ǻ���\n",a);
	// }
	
	//ѭ�����100�����еĻ���
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


	//switch���

	// int day = 0;
	// scanf("%d",&day);
	// switch (day)
	// {
	// case 1:
	// 	printf("����%d:",day);
	// 	break;
	// case 2:
	// 	printf("����%d:",day);
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
	

//��д����ʵ�� �û������������������ȷ �� �������������� ���˳� ֻ�����λ���

int i = 0;
char password[20] = {0};
for (i = 0; i < 3; i++)
{
	printf("����������:>");
	
	scanf("%s",password);

	if (strcmp(password,"123456") == 0)
	{
		printf("������ȷ");
		break;
	}
	
}
if (i==3)
	printf("������������˳�\n");
	return (0);
}


//==���ܱȽ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯����strcmp