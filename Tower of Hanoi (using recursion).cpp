#include<bits/stdc++.h>
using namespace std;

void solving(int s, int d, int h, int n)
{
	if (n == 1)
	{
		cout << "Moving " << n << " from " << s << " to " << d << endl;
		return;
	}
	solving(s, h, d, n - 1);
	cout << "Moving " << n << " from " << s << " to " << d << endl;
	solving(h, d, s, n - 1);
}


int main()
{
	int n;
	cout << "Enter N to see the process of Tower of Hanoi Algorithm: ";
	cin >> n;
	int s = 1, h = 2, d = 3;
	solving(s, d, h, n);
	return 0;
}
