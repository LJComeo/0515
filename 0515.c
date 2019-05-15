#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0

int find_round(char *src, char *find){
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;
}
int main(){
	printf("%d\n", find_round("ABCDE", "DEABC"));
	system("pause");
	return 0;
}
#endif
#if 0
void findnum(int *src,int n ,int*pnum1, int *pnum2){
	int i;
	int sum = 0;
	for (i = 0; i < n; ++i){
		sum ^= src[i];
	}
	int pos = 0;
	for (pos = 0; !(sum & 1 << pos); ++pos);
	int num1 = 0;
	int num2 = 0;
		for (i = 0; i < n; ++i){
			if (src[i] & 1 << pos){
				num1 ^= src[i];
			}
			else{
			
				num2 ^= src[i];
			}
		}
	
	*pnum1 = num1;
	*pnum2 = num2;
}
int main(){
	int arr[] = { 5, 3, 9, 1, 7, 5, 4, 7, 4, 2, 9, 2 };
	int num1;
	int num2;
	findnum(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
	printf("%d %d\n", num1,num2);
	system("pause");
	return 0;
}
#endif
#if 0
int main(){
	int drink = 20, cover = 20;
	int sum = 20;
	while (cover!=1){
		drink = cover ;
		cover = drink / 2 + drink % 2;
		sum += drink / 2;
		
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
#endif
#if 0
char* Copy(char *a,const char *b){
	char *tmp = a;
	while ((*a++ = *b++));
	return tmp;
}
int main(){
	char a[] = "aAbBcC";
	char b[] = "ABCDEF";
	Copy(a, b);
	printf("%s\n",a);
	system("pause");
	return 0;
}
#endif

#if 1
int Cat(char *a, const char *b){
	char *tmp = a;
	while (*a++);
	a--;
	while ((*a++ = *b++));
		return tmp;
}
int main(){
	char a[] = "aAbBcC";
	char b[] = "ABCDEF";
	Cat(a, b);
	printf("%s\n",a);
	system("pause");
	return 0;
}
#endif