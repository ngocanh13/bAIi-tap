#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <Math.h>
int sodu(int a);
int ruttien(int a,int b);
int guitien(int a,int c);
int main(){
	int a=1000000,b,c,thoat=0;
	char option;
	int kq, kq2, kq3;
	do{
	printf("\n--------Menu-----------\n");
	printf("a. kiem tra so du\n");
	printf("b. rut tien\n");
	printf("c. Gui tien\n");
	printf("d. Thoat\n");
	fflush(stdin);

	printf("Nhap lua chon cua ban: ");
	scanf("%c", &option);
	switch(option){
		case 'a':{
			kq=sodu(a);
			printf("so du tai khoan cua ban :%d", kq);
			break;		
		}
		case 'b':{
			
			printf("Nhap so tien ban muon rut:");
			scanf("%d", &b);
			kq2=ruttien(a,b);
			printf("so du hien tai cua ban la: %d\n", kq2);
			break;
		}
		case 'c':{
			printf("nhap so tien ban muon chuyen :");
			scanf("%d", &c);
			kq3=guitien(a,c);
			printf("so du hien tai cua ban la: %d\n", kq3);
			break;
		}
		case 'd':{
			thoat=2;
			printf("Hen gap lai");
			break;
		}
	}
	}while(thoat<=1);
	return 0;
}
int sodu(int a){
	int kq=a;
	return kq;
}
int ruttien(int a,int b){
	int kq2=a-b;
	return kq2;
}
int guitien(int a,int c){
	int kq3=a+c;
	return kq3;
}

