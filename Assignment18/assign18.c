/*
 ���ϸ�: Assignment18-c
 ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
 0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 �ۼ���: ������
 ��¥: 2025.05.20
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisiors(int rnum) {
	int i, cnt = 0;
	printf("%d�� ���: ", rnum);

	for (i = 1; i <= rnum; i++) {

		if (rnum % i == 0) {
			cnt++;
			printf("%d ", i);
		}
	}
	printf("=> �� %d��\n", cnt);
}


int main() {
	int i, j, cnt = 0;

	srand((unsigned int)time(NULL));

	for (i = 0; i < 3; i++) {
		int rnum = rand() % 1000;
		divisiors(rnum);
	}
}