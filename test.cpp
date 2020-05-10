#include <bits/stdc++.h>
using namespace std;

typedef long long ll;	

int n, b, a[1000000];

void solve(){
	cin >> n >> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int cnt = 0, sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(sum <= b){
			cnt++;
		}
	}
	cout << cnt << "\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t, i = 1;
	cin >> t;
	while(t--){
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
}
