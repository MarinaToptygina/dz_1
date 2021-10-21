#include<iostream>
using namespace std;
void primeF(int x, int y)

{
	if (x > 1) {
		if (x % y == 0)
		{
			primeF(x / y, y);
			cout << y << " ";

		}
		else primeF(x, y + 1);

	 }
}
int main() {
	int n;
	cin >> n;
	primeF(n, 2);
	return 0;
}