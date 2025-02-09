#include <bits/stdc++.h> 
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> td(n);

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        td[i] = {{x, y}, z}; 
    }
sort(td.begin(), td.end(),[](const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b){
        if (a.first.first == b.first.first) {
            return a.first.second < b.first.second; // S?p x?p theo td.first.second n?u td.first.first b?ng nhau
        }
        return a.first.first < b.first.first; // S?p x?p theo td.first.first
      }
    );
    return 0;
    
}

