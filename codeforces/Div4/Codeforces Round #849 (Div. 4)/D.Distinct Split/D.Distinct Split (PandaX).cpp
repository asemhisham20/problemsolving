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
//     Could use linear array for O(1) calculations
		map<char, int> first, second;
		first[s[0]]++;
		for (int i = 1; i < n; i++)
		{
			second[s[i]]++;
		}
		int ret = first.size() + second.size();
		for (int i = 1; i < n; i++)
		{
			first[s[i]]++, second[s[i]]--;
			if (!second[s[i]])
				second.erase(s[i]);
			ret = max<int>(ret, first.size() + second.size());
		}
		cout << ret << "\n";
	}

	return 0;
}
