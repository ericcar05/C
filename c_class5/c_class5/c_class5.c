#include<stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������) : ");
	scanf_s("%f",&num1);
	printf("�Է��� �Ǽ� %f \\n",num1);

	printf("�Ǽ� �Է�2(e ǥ�������) : ");
	scanf_s("%f",&num2);
	printf("�Է��� �Ǽ� %f \\n",num2);

	printf("�Ǽ� �Է�3(e ǥ�������) : ");
	scanf_s("%f",&num3);
	printf("�Է��� �Ǽ� %f \\n",num3);


	return 0;
}

/*
	int num1, num2, num3;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %o %x",&num1,&num2,&num3);
	printf("�Էµ� ���� 10���� ��� : ");
	printf("%d %d %d \\n",num1 ,num2 ,num3 );
*/

/*
	printf("%-8s %14s %5s \\n","�̸�" ,"������" ,"�г�");
	printf("%-8s %10s %5s \\n","�̸�","������","�г�");
*/

/*
	double d1=1.23e-3;
	double d2=1.23e-4;
	double d3=1.23e-5;
	double d4=1.23e-6;

	printf("%g \\n",d1);
	printf("%g \\n",d2);
	printf("%g \\n",d3);
	printf("%g \\n",d4);
*/

/*
	printf("%f \\n",0.1234);
	printf("%e \\n",0.1234);
	printf("%f \\n",0.123456789);
	printf("%e \\n",0.123456789);
*/

/*
	int myAge = 12;
	printf(" my age %d,%o %#x %#X \\n",myAge,myAge,myAge,myAge,myAge);
*/

/*
	printf("test  \\"I am a student\\" test\\b \\n");
*/
