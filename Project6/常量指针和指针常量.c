#include <stdio.h>
void main() {
	int num = 100;
	int num1 = 200;
	int num2 = 300;
	//����ָ���ֵ�����޸� ָ��ĵ�ַ���Ա���ֵ const��*֮ǰָ��ĵ�ַ�ǿ��Ա��ٴθ�ֵ��
	//
	const int* n_p = &num2;

	printf("n_p=%p \n", n_p);
	n_p = &num1;

	printf("n_p=%p \n", n_p);


	//ָ�볣�� ��ַ�ǲ��ܱ����¸�ֵ�� ��ֵ���Ըı�
	//const ��* ֮�� ��ָ�볣��
	int *const n_p1 = &num2;
	//n_p1 = &num;
	*n_p1 = 100;
	printf("n_p1=%d\n", *n_p1);









	getchar();
}