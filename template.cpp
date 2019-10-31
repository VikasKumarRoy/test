#include<bits/stdc++.h>
#define ll long long
#define deb(x) cout << #x << " -- " << x << endl;

using namespace std;

int solve(int x) {
    
}

int main()
 {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector <int> v(n);
	    for(int i = 0; i < n; i++)
	        cin >> v[i];

	    cout << solve(n) << endl;
	}
	return 0;
}


https://ideone.com/RhCGha

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
 {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> m;
	    vector <int> coins(m);
	    for(int i = 0; i < m;  i++)
	        cin >> coins[i];
	    cin >> n;
	    vector <vector <int>> dp(m+1, vector <int> (n+1, 0));
	    for(int i = 0; i < m+1; i++)
	        dp[i][0] = 1;
	    for(int i = 1; i < m+1; i++)
	        for(int j = 1; j < n+1; j++) {
	            int x = dp[i-1][j];
	            int y = j-coins[i-1] < 0 ? 0 : dp[i][j-coins[i-1]];
	            dp[i][j] = x + y;
	        }
	   // for(int i = 0; i < m+1; i++){
	   //     for(int j = 0; j < n+1; j++)
	   //         cout << dp[i][j] << " ";
	   //     cout << endl;
	   // }
	    cout << dp[m][n] << endl;
	}
	return 0;
}



