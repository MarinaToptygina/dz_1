#include<iostream>
#include<ctime>
using namespace std;

int cubik()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "1 ����� = " << rand() % 5 + 1 << endl;
	cout << "2 ����� = " << rand() % 5 + 1 << endl;
	return 0;
}
int main()
{
	cubik();
	return 0;
}