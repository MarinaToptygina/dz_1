#include<iostream>
#include<ctime>
using namespace std;

int cubik()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "1 кубик = " << rand() % 5 + 1 << endl;
	cout << "2 кубик = " << rand() % 5 + 1 << endl;
	return 0;
}
int main()
{
	cubik();
	return 0;
}