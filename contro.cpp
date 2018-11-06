#include<stdio.h>
#include<conio.h>
int main (){
	int n ;
	printf(" nhap n ");
	scanf("%d",&n);
	  int *p=&n;
	*p=10;
	
	
	printf(" dia chi cua n %d ",&n);
    printf(" gia tri cua n %d ",n);
	
}
