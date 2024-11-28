#include<stdio.h>
int main(){
	int n=4;
	int array[4][4]={{1,2,3,6},{4,5,6,2},{7,8,9,5},{2,4,5,6}};
	int tong;
	printf("Cac phan tu tren duong cheo phu cua ma tran la: \n");
	for(int i = 0;i<4;i++){
		printf("%d\n",array[i][n-1-i]);
		tong += array[i][n-1-i];
	}
	printf("Tong cac phan tu tren duong cheo phu la: %d",tong);
}
