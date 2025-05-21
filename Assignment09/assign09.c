/*
 ���ϸ�: Assignment9-c
 ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ���
 �����Ͻÿ�. �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������
 ������ ���ؼ� ����ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.05.20
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(int rgb) {
    return (rgb >> 16) & 0xFF;
}

int get_green(int rgb) {
    return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb) {
    return rgb & 0xFF;
}


int make_rgb(int r, int g, int b) {
    return (r << 16) | (g << 8) | b;
}

int main() {
    int rgb;
    printf("RGB ����?");
    scanf("%x", &rgb);

    printf("RGB %06X�� ����: ", rgb);

    int r = get_red(rgb);
    int g = get_green(rgb);
    int b = get_blue(rgb);

    int comp_r = 255 - r;
    int comp_g = 255 - g;
    int comp_b = 255 - b;

    int comp_rgb = make_rgb(comp_r, comp_g, comp_b);

    printf("%06X\n", comp_rgb);

    return 0;
}
