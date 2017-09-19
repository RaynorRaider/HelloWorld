#include<stdio.h>
int main(void)
{
    unsigned int a=~0;
    int b = ~(1<<31);
    int c = 1<<31;
    printf("%d %d %d\n",a,b+1,c);
    return 0;    
}
