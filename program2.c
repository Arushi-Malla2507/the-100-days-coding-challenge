#include<stdio.h>
int main()
{
    int a,b;
   
    printf("enter value for a : \n");
    scanf("%d", &a);
    printf("enter value for b : \n");
    scanf("%d", &b);
    printf("their sum is = %d \n", a+b);
    if(a>b)
    printf("their difference is = %d \n", a-b);
    else 
    printf("their difference is = %d \n", b-a);  
    printf("their product is = %d \n", a*b);
    printf("their quotient is = %d \n", a/b);   
    return 0;
}
