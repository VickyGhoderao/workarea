#include <stdio.h>
int add(int a,int b);
int main()
{
    int a,b;
    int sum;
    printf("Enter a first numbe:");
    scanf("%d",&a);
    printf("Enter a second number:");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum=%d",sum);
    
}
int add(int a,int b){
    return a+b;
}