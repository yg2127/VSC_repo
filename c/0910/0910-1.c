#include<stdio.h>

int main()
{
    char ch = 'A' , *pch;
    int num = 3, *pnum;
    pch = &ch;
    pnum = &num;

    printf("%p %c\n", pch, ch);
    printf("%p %d\n", pnum, num);

    return 0;
}