#include<iostream>
using namespace std;
void dig(int n) {
	if (n / 10 > 0)
		dig(n / 10);
	cout << n % 10 << " ";
}
int main() 
{
		int x;
		setlocale(LC_ALL, "ru");
		cout << "введите число" << endl;
		cin >> x;
		dig(x);
	    return 0;
}