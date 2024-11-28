#include<stdio.h>
int main(){
	int array[4][4]={{1,2,3,6},{4,5,6,2},{7,8,9,5},{2,4,5,6}};
	int tong;
	printf("Cac phan tu tren duong cheo chinh cua ma tran la: \n");
	for(int i = 0;i<4;i++){
		printf("%d\n",array[i][i]);
		tong += array[i][i];
	}
	printf("Tong cac phan tu tren duong cheo chinh la: %d",tong);
}
