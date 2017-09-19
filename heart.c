#include<stdio.h>
int main(void)
{
    float row,col,a,b;
    int i=0;
    for(row=1.5;row>=-1.5;row-=0.1)
    {
        for(col=-1.5;col<=1.5;col+=0.05)
        {
            a=(col*col+row*row-1);
            b=col*col*row*row*row;
            a*a*a<=b? putchar("LiChunLan"[i++]):putchar(' ');
            if("LiChunLan"[i]=='\0') i=0;
        }
        putchar('\n');
    }  
}
