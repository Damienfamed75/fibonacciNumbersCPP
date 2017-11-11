#include <iostream>
#include <string>

using namespace std;
int getFibo(int n) {
	int a = 1, b = 0, temp;
	while (n > 0) {
		temp = a;
		a = a + b;
		b = temp;
		n--;
		cout << b << endl;
	}
	return b;
}
int main() {
	cout << "Enter number of laps: ";
	int userResponse;
	cin >> userResponse;
	system("cls");
	cout << '\n' << "result: " << getFibo(userResponse) << string(2, '\n') << endl;
	system("pause");
	return 0;
}