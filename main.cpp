#include<iostream>
using namespace std;
int main() {
	int i, j1, j2;
	cin >> i;
	for (int shit = 2; shit < i; shit++) {
		if (i % shit == 0) {
			j1 = shit;
			j2 = i / shit;
			break;
		}
	}
	if (j1 > j2) {
		cout << 1;
	}
	else {
		cout << j2;
	}
}