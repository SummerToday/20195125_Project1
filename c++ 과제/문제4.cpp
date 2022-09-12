#include<iostream>
using namespace std;

int main() {
	int num, sum = 1;
	cin >> num;
	cout << "1";
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			sum += i;
			cout << " + " << i;
		}
	}
	cout << " = " << sum;

}