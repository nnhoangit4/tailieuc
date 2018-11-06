#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapmang(int *h,int n){
	for (int i=1;i<=n;i++){
		printf(" nhap phan tu thu h[%d] = ",h+i);
		scanf("%d",&h[i]);
	}
}
void xuatmang(int *h,int n){
	printf(" mang vua nhap ");
	for (int i=1;i<=n;i++){
		printf("\n h[%d] = %d",i,h[i]);
		
	}
}
int main (){
	int n;
	int *h;
	printf(" nhap n ");
	scanf("%d",&n);
	nhapmang(h,n);
	xuatmang(h,n);
}
