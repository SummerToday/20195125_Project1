#include<iostream>
using namespace std;

int main() {
	int N, M, sum = 0;
	cin >> N >> M;
	cout << "N 값은 " << N << ", M 값은 " << M << endl;
	for (int i = 0; i < N + 1; i++) {
		if (i % M == 0)
			sum += i;
	}
	cout << sum;
}