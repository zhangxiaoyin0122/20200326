#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {//密码验证
	char str1[] = " ";
	char str2[] = " ";
	scanf("%s %s", &str1, &str2);
	if (strcmp(str1, str2) == 0) { // 0 表示为真
		printf("same\n");
	}
	else {
		printf("different\n");
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 0;
	while (~scanf("%d", &n)) { //实现多组输入
		//while(scanf("%d",&n)!=EOF)
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}

判断奇偶性 以及输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main() {
	/*int n = 0;
	while (~scanf("%d", &n)) {
		if (n % 2 == 0) {
			printf("偶数\n");

		}
		else {
			printf("奇数\n");
		}
	}*/
	/*for (int i = 0; i <= 100; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}*/
	//二分查找
int BinSearch(int arr[],int left ,int right , int key) {
	int mid = 0;
	/*int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]) - 1;*/
	while (left <= right) {
		mid = (left + right) >> 1;
		if (arr[mid] > key) {
			right = mid - 1;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
		return -1;
}
int main(){
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int ret = BinSearch(arr,0,8,10);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 10;
	char* pc = (char*)&n;
	int* pi= &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	printf("%p\n",pi );
	printf("%p\n", pi+1);
	system("pause");
	return 0;
}