#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	setlocale(0, "");
    char a[10];
	char b[10];
	char c[10];
	gets_s(a);
	gets_s(b);
	gets_s(c);
	strcat_s(a, b);
	char *pos = (strstr(a,c));
	int p = 0;
	int n = 0;

	while (pos != NULL) {
		p = pos - a;
		pos = strstr(a + p + 1, c);
		n++;

	}
	
	cout << n;
	cout << endl;
	system("pause");
	return 0;
}