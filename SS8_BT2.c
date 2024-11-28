#include<stdio.h>
int main(){
	int array[5]={2,4,6,1,5};
	int i,n;
	int count = 1;
	printf("Nhap vao mot gia tri: ");
	scanf("%d",&n);
	for(i = 0;i < 5;i++){
		if(n == array[i]){
			printf("So ban nhap nam o vi tri thu %d trong mang",i+1);
			count = 0;
		}
	}
	if(count){
		printf("Khong trung voi phan tu nao trong mang");
	}
}
