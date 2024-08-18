#include <bits/stdc++.h>
using namespace std;

string solve() {
    int A, B, C ;
    cin >> A >> B >> C ;
    int max_ele = max(A, max(B, C)) ;
    
    return ((A + B + C + 1 < 2 * max_ele) ? "NO" : "YES") ;
}

int main() {
	int t ;
	cin >> t ;
	while(t--) cout << solve() << endl ; ;
}
