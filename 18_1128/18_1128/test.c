/*1.写一个函数返回参数二进制中 1 的个数
比如： 15 0000 1111 4 个 1
程序原型：
int count_one_bits(unsigned int value)
{
	// 返回 1的位数 
}*/
/*#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value) {

}
int main() {

	system("pause");
	return 0;
}*/

/*2.获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。*/
/*#include<stdio.h>
#include<stdlib.h>
int main() {

	system("pause");
	return 0;
}*/
/*3. 输出一个整数的每一位。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Print(int n) {
	while (1) {
		if (n > 9) {
			n = n / 10;
			printf("%d", n);
			n = n % 10;
		}
		printf("%d", n);
		break;
	}
}
int main() {
	int i = 0;
	printf("请输入一个整数:");
	scanf("%d", &i);
	Print(i);
	system("pause");
	return 0;
}

/*4.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7*/
/*#include<stdio.h>
#include<stdlib.h>
int main() {

	system("pause");
	return 0;
}*/