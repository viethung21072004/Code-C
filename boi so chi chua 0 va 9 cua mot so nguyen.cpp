#include <bits/stdc++.h>
#include<queue>

using namespace std;
vector<long long> v;
void pra(){
	queue< string> q;
	q.push("9");
	v.push_back(9);
	while(1){
		string top = q.front();
		q.pop();
		if(top.length()==11) break;
		v.push_back(stoll(top + "0"));
		v.push_back(stoll(top + "9"));
		q.push(top +"0");
		q.push(top + "9");
			
	}
			}

int main(){
int n;
cin >> n;
int i=0;
pra();
for(i;i<v.size();i++){
	if(v[i]%n==0){
		cout<< v[i];
		break;
	}
	}
}
		




