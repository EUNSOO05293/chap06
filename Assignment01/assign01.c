/*
 ���ϸ�: Assignment1-c
 ����: �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.05.20
 ���� : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int x, int y);

int main()
{
	int x, y;
	
	printf("����?");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);

	printf("���簢���� �ѷ�: %d", get_perimeter(x, y));

	return 0;
}

int get_perimeter(int x, int y)
{
	int circumference;

	circumference = x * 2;
	circumference += y * 2;

	return circumference;
}