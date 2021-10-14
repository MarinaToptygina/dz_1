#include<iostream>
using namespace std;
int sum_del(int n)
{
	int s = 0, d;
	for (int d = 1; d * d <= n; d++)
	{
		if (n % d == 0)
		{
			s += d;
			if (d * d != n)
			{
				s += n / d;
			}
		}
	}
	return s - n;


}
int main()
{
	int i;
	for (i = 1; i < 10000; i++)
	{
		int t = sum_del(i);
		if (sum_del(t) == i && t < i)
		{
			cout << t << " " << i << endl;
		}
	}
	return 0;
}