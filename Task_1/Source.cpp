#include <iostream>
using namespace std;
int main() {
r:cout << "Enter value: " << endl;
	int N, counter = 0;
	int a, b, c;
	cin >> N;
	a = N / 100, b = (N / 10) % 10, c = N % 10;
	cout << a << " " << b << " " << c << endl;

	if (a % 2 != 0) counter++;
	if (b % 2 != 0) counter++;
	if (c % 2 != 0) counter++;
	cout << counter << endl;
	goto r;
	return 0;

}