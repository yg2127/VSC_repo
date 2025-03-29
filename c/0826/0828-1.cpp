#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m, num, t;
	int y, s, ms, max_y = 0, max_s, max_num;
	scanf("%d %d", &n, &m);
	for (num = n; num <= m; num++) {
		t = num;
		y = 1; // 약수 1로 초기화
		s = 0; // 소인수 개수 1로 초기화

		int j = 2; // 소인수
		while (t > 1) { // 소인수들로 다 나눠줄 경우 1이 되므로 1보다 큰 경우 반복 ㄱㄱ
			ms = 0; // 매개 소인수 개수 초기화 해주기
			while (t % j == 0) { // 소인수로 나누어 떨어지면
				t /= j; // 그걸로 나눠주고
				ms++; // 매개 소인수의 지수 +1 해주고
			}
			// 매개num 이 j로 안나누어 떨어지면
			j++; // j++해서 다시 해보기
			if(ms != 0) { // j로 나누어 떨어진 적이 한번이라도 있다면
				s += ms; // 소인수 개수에 더해주기
				y *= (ms + 1); // 약수개수에 +1해준 후 곱해주기
			}
		}
		if (max_y < y) { // 약수가 최대일 때 약수, 소인수 개수, 해당 수 구하는 알고리즘
			max_y = y;
			max_s = s;
			max_num = num;
		}
	}
	printf("%d %d %d\n", max_num, max_y, max_s);
}

// 