#include<stdio.h>

int main()
{
    char ch = 'A' , *pch; // *pch 선언만 해놨음
    int num = 3, *pnum; // *pnum  선언만 해놨음
    pch = &ch; // 주소 배열해줌
    pnum = &num; // 주소 배열해줌

    printf("%p %c\n", pch, *pch); // * 안붙이면 주소 형식이 되고 * 붙이면 해당 주소의 내용이 된다
    printf("%p %d\n", pnum, *pnum);

    return 0;
    // 즉 ch = *pch, &ch = pch 가 된다. 우리가 printf에서 %p 양식을 쓰려면 변수 앞에 &를 붙여야 하는 개념또한 떠올리면 좋다.
}