#include <stdio.h>
void main() {
	int num = 100;
	int num1 = 200;
	int num2 = 300;
	//常量指针的值不能修改 指针的地址可以被赋值 const在*之前指针的地址是可以被再次赋值的
	//
	const int* n_p = &num2;

	printf("n_p=%p \n", n_p);
	n_p = &num1;

	printf("n_p=%p \n", n_p);


	//指针常量 地址是不能被重新赋值的 而值可以改变
	//const 在* 之后 叫指针常量
	int *const n_p1 = &num2;
	//n_p1 = &num;
	*n_p1 = 100;
	printf("n_p1=%d\n", *n_p1);









	getchar();
}