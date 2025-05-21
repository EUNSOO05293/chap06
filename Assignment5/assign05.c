/*
 ���ϸ�: Assignment5-c
 ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
       �� �Լ��� �̿��ؼ� 0�� �̷µ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.05.20
 ���� : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int is_odd(int n) {
    return n % 2 != 0;
}

int main()
{
    int val = 0, even = 0, odd = 0;
    printf("������ ��ĭ���� �����ؼ� �Է��ϼ��� (�������� 0 �Է�):\n");

    do
    {
        scanf("%d", &val);
        if (val == 0)
            break;

        if (is_even(val))
            even++;
        else if (is_odd(val))
            odd++;

    } while (1);

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);

    return 0;
}