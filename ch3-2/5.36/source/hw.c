#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char A, char B, char C);

int moved = 0;

int main() 
{
	int n;
	
	printf("�п�J�Фl�ƶq�G");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("\n�`�@ %d �ӨB�J\n\n", moved);
	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1) 
	{
		printf("���ʺФl %c �� %c\n", A, C);
		moved++;
	}
	else 
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}