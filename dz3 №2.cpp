#include<iostream>
#include<cmath>
using namespace std;
int BinToD(int n, int i)
{
	if (n != 0)
	{
		return (n % 10) * (pow(2, i)) + BinToD(n / 10, i + 1);
	}
	else
	{
		return 0;

	}
}
int main() {
	int n;
	int i = 0;
	cin >> n;
	cout << BinToD(n, i) << endl;
	return 0;
}