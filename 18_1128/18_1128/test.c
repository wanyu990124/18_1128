/*1.дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}*/
/*#include<stdio.h>
#include<stdlib.h>
int count_one_bits(unsigned int value) {

}
int main() {

	system("pause");
	return 0;
}*/

/*2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�*/
/*#include<stdio.h>
#include<stdlib.h>
int main() {

	system("pause");
	return 0;
}*/
/*3. ���һ��������ÿһλ��*/
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
	printf("������һ������:");
	scanf("%d", &i);
	Print(i);
	system("pause");
	return 0;
}

/*4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7*/
/*#include<stdio.h>
#include<stdlib.h>
int main() {

	system("pause");
	return 0;
}*/