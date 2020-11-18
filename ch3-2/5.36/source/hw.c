#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char A, char B, char C);

int moved = 0;

int main() 
{
	int n;
	
	printf("請輸入碟子數量：");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("\n總共 %d 個步驟\n\n", moved);
	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1) 
	{
		printf("移動碟子 %c 到 %c\n", A, C);
		moved++;
	}
	else 
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}