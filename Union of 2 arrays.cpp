#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    set<int> s;
	   
	    for(int i = 0;i<n;i++){
	       cin >> a[i];
	       s.insert(a[i]);
	    }
	       
	    for(int i = 0;i<m;i++){
	       cin >> b[i];
	       s.insert(b[i]);
	    }
        cout<<s.size();
	    
	}
	return 0;
}
	
	
