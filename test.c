#define _CRT_SECURE_NO_WARNINGS  1

#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int a[30][30];//����1
	for (i = 0; i<n; i++)
	for (j = 0; j <= i; j++){
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i<n; i++)//������������
	for (j = 1; j<i; j++)
		a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

	for (i = 0; i<n; i++)//���
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
}