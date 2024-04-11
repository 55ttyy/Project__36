#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fun(int* a) {
	int temp = 0;
	int e = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int t = 0;
	int moth[12] = { 31,29,31,30,31,30,31,31,30,31,30 ,31};
	if (a[0] != 2 || a[1] != 0 || a[2] != 2 || a[3] != 3) {
		return 0;
	}
	for (int i = 0; i < 12; i++) {
		printf("\ni%d\n", i);
		e = moth[i];
		t = i % 10;
		if (i > 10) {
			q =(i - t)/ 10;
		}
		if (a[4] != q || a[5] != t) {
			printf("_%d_%d", q,t);
			temp = 0;
		}
		for (int x1 = 0; x1 < e+1; x1++) {
			p = x1 % 10;
			if(x1>10){
				o = (x1-p)/10;
			}
			if (a[6] != o || a[7] != p) {
				temp=0;
			}
			else
			{
				return 1;
			}
		}
		
	}
return temp;

}





int main() {

	int a[100] = { 5 ,6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7, 5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9, 2,
7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4, 4, 6, 8, 6, 3, 3, 8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6, 1, 4, 0, 1,
0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3 };
	for (int i = 0; i < 100; i++) {
		printf("%d ",a[i]);
	}
	int er[8] = { 2, 0, 2, 3, 2, 2, 2, 3 };
	int mooth[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int k = fun(er);
	printf("     %d", k);
	printf("%d", (123-123 % 10)/10);


	return 0;

}