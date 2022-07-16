#include <iostream>
using namespace std;
void Sum(int& a) {
	a++;
}
int main() {

	int b;
	int& c = b;
	cin >> b;
	cout << "before" << b << endl;
	Sum(c);
	cout << "after" << b;


	return 0;
}