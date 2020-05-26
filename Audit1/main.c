#include<stdio.h>                              
#include<windows.h>
#include <conio.h>
int main() {
	char password[30];
	char c, p = 32;
	int i = 0;
	while ((c = _getch()) != '\r')
	{
		if (c == 8) {
			printf("\b");
			printf("%c", p);
			printf("\b");
			if (i > 0)
				i--;
		}
		else {
			password[i++] = c;
			_putch('*');
		}
	}
	password[i] = '\0';
	printf("\n");
	for (int j = 0; password[j] != '\0'; j++) {
		printf("%c", password[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}