#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	int T = 1;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int i = 0, j = n - 1;
		while (i < j && s[i] != s[j])
		{
			i++, j--;
		}
		cout << n - i * 2 << "\n";
	}

	return 0;
}
