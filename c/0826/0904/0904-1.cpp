#include<stdio.h>
#pragma warning(disable:4996)

// *붙이는 것은 주소의 내용을 말함, *을 안붙이는 것은 주소 자체를 말함
// 이를 일반 변수에 대입하면 *붙이는 포인터는 변수 a 를 말하고 * 안붙이는 것은 &a 를 말함

int main()
{
    char ch, *pch = &ch;
    int num, *pnum = &num;
    scanf("%c", &ch);
    scanf("%d", &num);

    printf("%p %c\n", pch, *pch);
    printf("%p %c\n", &ch, ch);
    printf("%p %d\n", pnum, *pnum);
    printf("%p %d\n", &num, num);
}