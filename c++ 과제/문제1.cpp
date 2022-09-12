#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	char c;
	int j = 0, m = 0;
	cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
	while (1) {
		cin >> c;
		if ((int)c > 64 && (int)c < 91)
			cout << "Check to alphabet" << endl;
		if (c == EOF) break;
		switch (c) {
		case 'a':
		case'e':
		case'i':
		case'o':
		case'u':
			m++;
			break;
		default:
			j++;

		}
	}
	cout << "모음: " << m << endl;
	cout << "자음: " << j << endl;

}