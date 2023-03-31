#include <stdio.h>

void fun1(){
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d%d", &a, &b);
	
	printf("%d + %d = %d", a, b, a+b);
	printf("%d - %d = %d", a, b, a-b);
	printf("%d * %d = %d", a, b, a*b);
	printf("%d / %d = %d", a, b, a/b);
}

void fun2(){
	int a;
	float b;
	printf("두 수를 입력하세요 : ");
	scanf("%d%f", &a, &b);
	
	printf("출력1 : %d, %f\n", a, b);
	printf("출력2 : %f, %d\n", b, a);
}

void fun3(){
	char name[20] = {0};
	char a;
	printf("알파벳 하나와 이름을 입력하세요 : ");
	scanf("%c%s", &a, name);
	
	printf("알파벳 : %c, 이름 : %s", a, name);
}

int main()
{
	//short, int, long, long long //%d
	//float, double //%f
	//char //%c

    fun2();

    return 0;
}
	
	