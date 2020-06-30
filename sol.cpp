#include <bits/stdc++.h>

using namespace std;

void solve() {
	string a, b;
	cin >> a >> b;
	int flag = 0;
	for(int i = 0; a[i]; i++){
		for(int j = 0; b[j]; j++){
			if(a[i] == b[j]) flag = 1;
		}
		if(flag == 1) break;
	}
	cout << (flag == 1 ? "Yes" : "No") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}