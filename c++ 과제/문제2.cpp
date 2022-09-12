#include<iostream>
#include<stdio.h>
#include <random>
#include <ctime>
#include <functional>

using namespace std;

int main() {
	char c;
	mt19937 engine((unsigned int)time(NULL));                    // MT19937 ���� ����
	uniform_int_distribution<int> distribution(0, 10);       // ���� ����
	auto generator = bind(distribution, engine);

	int num1 = generator(), num2 = generator(), result = 0, answer;

	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	cout << num1 << " " << num2 << endl;
	cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
	cin >> c;
	switch (c) {
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
		break;
	case'/':
		result = num1 / num2;
		break;
	}
	cout << "��� �Է��ϱ�" << endl;
	cin >> answer;
	if (answer == result)
		cout << "�¾ҽ��ϴ�." << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�." << endl;

}