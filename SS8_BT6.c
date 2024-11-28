#include<stdio.h>
int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int tong;
	printf("Cac phan tu tren duong cheo chinh cua ma tran la: \n");
	for(int i = 0;i<3;i++){
		printf("%d\n",array[i][i]);
		tong += array[i][i];
	}
	printf("Tong cac phan tu tren duong cheo chinh la: %d",tong);
}
