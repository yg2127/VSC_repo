#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, n, num, y, max_y = 0, max_num; // 변수선언
	scanf("%d", &n); // 숫자 개수 입력
	for (i = 0; i < n; i++) { // 개수만큼 입력받기
		y = 0; // 약수갯수를 0으로 선언
		scanf("%d", &num); // 숫자 입력받기
		printf("%d: ", num); // 출력문 앞부분 작성
		for (j = 1; j <= num; j++) { // 약수와 그 개수 구하는 반복문
			if (num % j == 0) { // j로 나누어 떨어지면
				printf("%d ", j); //j 출력
				y++; // 약수 y += 1
			}
		}
		printf("%d\n", y); // 약수 j 출력 다 한 뒤 약수의 개수 y 출력
		if (max_y < y) { // 최대 약수개수 구하는 알고리즘
			max_y = y;
			max_num = num;
		}
	}
	printf("%d\n", max_num); // 숫자 다 받은 후 최대 약수개수 출력
}