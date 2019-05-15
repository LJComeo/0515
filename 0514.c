#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
void Left(char a[], int n, int k){
	int i = 0;
	while (n){
		char tmp = a[0];
		for (i = 0; i < k-1; ++i){
			a[i] = a[i + 1];
		}
		a[k - 1] = tmp;
		n--;
	}
}

int main(){
	char a[] = "ABCD";
	int n = 0;
	scanf("%d", &n);
	Left(a, n, strlen(a));
	printf("%s\n", a);
	system("pause");
	return 0;
}
#endif

int Judge(char a[],char b[] ,int m){
	int i;
	while (m){
		char tmp = a[0];
		for (i = 0; i < m - 1; ++i){
			a[i] = a[i + 1];
		}
		a[m - 1] = tmp;
		if (strcmp(a, b) == 0)
			return 1;
		m--;
	}
	if (m == 0){
		return 0;
	}
}
int main(){
	char a[] = "AABCD";
	char b[] = "ABCDA";
	int count=Judge(a, b, strlen(a));
	if (count == 1)
		printf("b字符串是a字符串通过旋转得到的\n");
	if (count == 0)
		printf("b字符串不是a字符串通过旋转得到的\n");
	system("pause");
	return 0;
}