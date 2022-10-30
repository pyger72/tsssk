#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 2; i > sqrt(a); i++) {
		if (a % i == 0) {
			cout << "ne prostoe";
			return 0;
		}
		cout << "простое";


	}
	cout << "postoe";
	return 0;
}