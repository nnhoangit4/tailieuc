#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void nhapmang(int *h,int n){
	for (int i=1;i<=n;i++){
		printf(" nhap phan tu thu h[%d] = ",i);
		scanf("%d",h+i);
	}
}
void xuatmang(int *h,int n){
	printf(" mang vua nhap ");
	for (int i=1;i<=n;i++){
		printf("\n h[%d] = %d",i,*(h+i));
		
	}
}
int main (){
	int n;
	
	printf(" nhap n ");
	scanf("%d",&n);
	
	int *p = (int *)malloc (n*sizeof(int));
	nhapmang(p,n);
	xuatmang(p,n);
}
