#include<stdio.h>

int main()
{
	char ch;
	
	printf("�빮�� �Է�:");
	scanf("%c",&ch);
	
	//�빮�� 'A' ASCII code �� 65 'B' ASCII code �� 66... 
	//�ҹ��� 'a' ACSII code �� 67   �� ������ gap�� 32
	
	printf("%c�� �ҹ��ڴ� %c�Դϴ�.",ch,ch+32);
	
	return 0; 
}
