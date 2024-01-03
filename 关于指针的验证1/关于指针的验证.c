#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mikada(int);//函数原型可以随意取名
int main(void)
{
	int abc = 2, efg = 5;

	printf("in main(),abc value is %d,address is %p\n", abc, &abc);
	printf("in main(),efg value is %d,address is %p\n", efg, &efg);
	mikada(abc);
	return 0;
}
void mikada(int efg)
{
	int abc = 10;
	printf("in mikada(),abc value is %d,address is %p\n", abc, &abc);
	printf("in mikada(),efg value is %d,address is %p\n", efg, &efg);
}

