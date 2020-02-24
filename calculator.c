#include<stdio.h>
main()
{
    int x,y,a,s,m,d,r;
    prinf("enter two numbers");
    scanf("%d%d",&x,&y);
    a = x+y;
    s = x-y;
    m = x*y;
    d = x/y;
    r = x%y;
    printf("addition = %d",a);
    printf("subtraction = %d",s);
    printf("multiplication = %d",m);
    printf("division = %d",d);
    printf("reminder = %d",r);
}
