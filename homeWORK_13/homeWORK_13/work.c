#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main0(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int i = 0, j = 8;
	int temp = 0;
	while (arr[i] % 2){
		i++;
	}
	while (arr[j] % 2 == 0){
		j--;
	}
	while (i <= j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		while (arr[i] % 2){
			i++;
		}
		while (arr[j] % 2 == 0){
			j--;
		}
	}
	for (i = 0; i < 9; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

int findNum(int arr[][3],int x,int y, int num){
	int i = 0, j = y - 1;
	while (i < x&&j >= 0){
		if (arr[i][j] < num){
			i++;
		}
		else if (arr[i][j]>num){
			j--;
		}
		else{

			return 1;
		}
	}
	return 0;
}
int main(){
	int num;
	int arr[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	printf("请输入一个要查找的数:");
	scanf("%d", &num);
	if (findNum(arr, 3, 3, num)){
		printf("找到了\n");
	}
	else{
		printf("未找到!\n");
	}
	system("pause");
	return 0;
}