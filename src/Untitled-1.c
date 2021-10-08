#include<accctrl.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
extern int Add(int,int);

int main()
{
    
    int a =10;
    int b =20;
    int sum = Add(a,b);
    printf("sum=%d\n",sum);
    return 0;
}
