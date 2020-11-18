#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	char a;
	int i;
	printf("enter ¦r¥À\n");
	scanf_s("%c", &a);
	i = (int)a;
	if (i >= 65 && i <= 90)
		printf("%c", (char)a + 32);
	else
		printf("%c", (char)a - 32);
	system("pause");
	return 0;
}
