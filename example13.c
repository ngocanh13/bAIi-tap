#include <stdio.h>

float chuvi(int a, int b);

int dientich(int a, int b);

int main() {
    int a, b, exit = 0;
    int kq;
    float kq2;
    char option;
    printf("Nhap do dai cua a: ");
    scanf("%d", &a);
    printf("Nhap do dai cau b: ");
    scanf("%d", &b);
    do {

        printf("----------Menu----------\n");
        printf("1. Tinh Chu Vi\n");
        printf("2. Tinh Dien Tich\n");
        printf("3. Exit\n");
        printf("Nhap lua chon cua ban: ");
        fflush(stdin);
        scanf("%c", &option);
        switch (option) {
            case 'c': {
                kq2 = chuvi(a, b);
                printf("Gia tri cua chu vi %.1f cm\n", kq2);
                break;
            }
            case 'd': {
                kq = dientich(a, b);
                printf("Gia tri cua dien tich %d cm\n", kq);
                break;
            }
            case 'e': {
                exit = 2;
                printf("end");
                break;
            }
        }
    } while (exit <= 1);
    return 0;
}

int dientich(int a, int b) {
    int kq = a * b;
    return kq;
}

float chuvi(int a, int b) {
    float kq2 = (float) (a + b) / 2;
    return kq2;
}

