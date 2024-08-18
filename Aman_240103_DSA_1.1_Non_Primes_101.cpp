#include <bits/stdc++.h>
using namespace std;

vector <int> primes(201, 1) ;

void prime() {
    for (int i = 2 ; i <= 200 ; i++) {
        if (!primes[i]) continue ;
        for (int j = 2 ; j * i <= 200 ; j++) {
            if (!primes[j * i]) continue ;
            primes[j*i] = 0 ;
        }
    }
}

void solve() {
    int N ;
    cin >> N ;
    vector <int> A(N) ;
    for (int i = 0 ; i < N ; i++) cin >> A[i] ;
    
    int i, j ;
    bool found = false ;
    
    for (i = 0 ; i < N ; i++) {
        for (j = i + 1 ; j < N ; j++) {
            if (!primes[A[i] + A[j]]) {
                found = true ;
                break ;
            }
        }
        if (found) break ;
    }
    
    if (found) cout << i + 1 << " " << j + 1  << endl ;
    else cout << -1 << endl ;
}

int main() {
    prime() ;
    int t ;
    cin >> t ;
    while (t--) solve() ;
}
