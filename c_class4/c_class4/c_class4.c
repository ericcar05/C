#include <stdio.h>

int main(void) {
    int num1=3;
    int num2=4;
    double divResult;// ���� ���� �ݷ�(:) ��� �����ݷ�(;) ���

    // ���� num1�� num2�� double�� ĳ��Ʈ�Ͽ� �������� ����
    divResult = (double)num1 / num2;

    printf("������ ���: %f\n", divResult);// printf ���ڿ����� Wn -> \n���� ����

    return 0;
}

/*
int main(void) {
    char ch1='A', ch2 = 'A';// ch2�� 'A'�� ����
    char ch3='Z', ch4 = 'Z';// ��ȣ �߰� �� ch4�� 'Z'�� ����

    // �� ������ ���� ���ڸ� ����մϴ�.
    printf("%c %d \n",ch1,ch1);
    printf("%c %d \n",ch2,ch2);
    printf("%c %d \n",ch3,ch3);
    printf("%c %d \n",ch4,ch4);

    return 0;
}
*/