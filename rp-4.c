#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
        printf("%d is largest",a);
        }
        else
        {
        printf("%d is largest",c);
        }
    }
    if(b>a)
    {
        if(b>c)
        printf("%d is largest",b);
        else
        printf("%d is largest",c);
    }
    
}
