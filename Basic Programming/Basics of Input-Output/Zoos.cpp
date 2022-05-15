#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.length() , z =0 , o=0;
	for(int i = 0; i < len ; i++){
		if(s[i] == 'z') z++;
		else if(s[i] == 'o') o++;
	}
	if(z * 2== o) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
