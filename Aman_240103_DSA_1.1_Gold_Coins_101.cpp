#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B, X, Y ;
	cin >> A >> B >> X >> Y ;
	int chef_coins = (X > Y) ? A : B ;
	cout << chef_coins << endl ;
	return 0 ;
}