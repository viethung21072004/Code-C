#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	int max_sub = 0;
   int N, T,D ;
    cin >> N >> T >>  D;
    vector<int> a(N+1);
    vector<int> t(N+1);
    for(int i=0 ; i<=N;i++){
    	cin >> a[i];
    }
    for(int i=0;i<=N;i++){
    	cin >> t[i];
    }
    
    vector<vector<int>> dp(N+1,vector<int>(T+1,0));
    for(int i=1 ; i<= N ; i++){
    	for(int j=1;j<=T;j++){
    		if(j-D >= 0){
    			for(int k=max(1,i-D);k<j;k++){
    			dp[i][j] = max(dp[i][j], dp[i][j-t[i] + a[i]]);
			    }
    		
		    }
		      max_sub = max(max_sub, dp[i][j]);
	    }
	    
    }
    cout << max_sub;
}

