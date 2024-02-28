#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char s[255];
	printf_s("nhap chuoi s:");
	gets_s(s);
	printf_s("chuoi vua nhap la:%s", s);
	int dem = 0, l = strlen(s);
	for (int i = 0; i < l; i++)
		if (s[i] == 'a')
			dem++;
	printf_s("\nso ki tu a co trong chuoi la:%s", dem);
	_getch();
}