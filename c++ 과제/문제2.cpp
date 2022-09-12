#include<iostream>
#include<stdio.h>
#include <random>
#include <ctime>
#include <functional>

using namespace std;

int main() {
	char c;
	mt19937 engine((unsigned int)time(NULL));                    // MT19937 난수 엔진
	uniform_int_distribution<int> distribution(0, 10);       // 생성 범위
	auto generator = bind(distribution, engine);

	int num1 = generator(), num2 = generator(), result = 0, answer;

	cout << "산수 문제를 자동으로 출제합니다." << endl;
	cout << num1 << " " << num2 << endl;
	cout << "연산자 입력하기(+,-,*,/)" << endl;
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
	cout << "결과 입력하기" << endl;
	cin >> answer;
	if (answer == result)
		cout << "맞았습니다." << endl;
	else
		cout << "틀렸습니다." << endl;

}