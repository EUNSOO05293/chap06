/*
 ���ϸ�: Assignment3-c
 ����: distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.05.20
 ���� : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);

int main()
{
	int x1, y1, x2, y2;
	printf("������ ������ ��ǥ?");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ?");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %.6f", x1, y1, x2, y2, distance(x1, y1, x2, y2));

	return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
	int width = pow(x2 - x1, 2);
	int length = pow(y2 - y1, 2);

	return sqrt(width + length);

}
