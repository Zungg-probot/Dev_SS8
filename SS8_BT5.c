#include<stdio.h>
int main(){
	int array[3][4]={{1,2,1,4},{5,4,1,3},{7,1,9,8}};
	int tong;
	for(int i=0;i < 4;i++){
		tong += array[0][i];
	}
	for(int i=0;i < 4;i++){
		tong += array[2][i];
	}
	for(int i = 0;i < 3;i++){
		tong += array[i][0];
	}
	for(int i = 0;i < 3;i++){
		tong += array[i][3];
	}
	tong -= array[0][0];
	tong -= array[2][3];
	tong -= array[2][0];
	tong -= array[0][3];
	printf("Tong cac phan tu tai bien cua ma tran la: %d",tong);
}
