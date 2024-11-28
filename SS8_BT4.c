#include<stdio.h>
int main(){
	int array[2][3]={{1,9,3},{4,5,6}};
	int max;
	for(int i = 0;i < 2;i++){
		for(int j = 0;j<3;j++){
			if(max < array[i][j]){
				max = array[i][j];
			}
		}
	}
	printf("So lon nhat trong mang 2 chieu la: %d", max);
}
