#include <bits/stdc++.h>
using namespace std;

int solve() {
    int N, M ;
    cin >> N >> M ;
    
    if (N <= M) return -1 ;
    return 2 * M + 1 ;
}

int main() {
	int t ;
	cin >> t ;
	while (t--) cout << solve() << endl ;
}