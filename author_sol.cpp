#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int res = 0;
		// outer loop = numbers with repeating digits of 1 (i.e., {1, 11, 111, ..., n})
		for (long long pw = 1; pw <= n; pw = pw * 10 + 1) {
			// inner loop = numbers from 1 to 9 (inclusive)
			// count the number of products of 'pw' and 'd', and check if it's 
			// less than or equal to 'n'
			for (int d = 1; d <= 9; d++) {
				if (pw * d <= n) {
					// increment 'res'
					res++;
				}
			}
		}
		cout << res << '\n';
	}
	return 0;
}
