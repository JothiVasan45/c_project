#include<stdio.h>
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("After swapping x=%d y=%d\n",x,y);
}
int main()
{
    int a,b;
    a=5;
    b=6;
    printf("\nBefore swapping a=%d b=%d\n",a,b);
    swap(a,b);
    printf("\nAfter swapping a=%d b=%d",a,b);

}
