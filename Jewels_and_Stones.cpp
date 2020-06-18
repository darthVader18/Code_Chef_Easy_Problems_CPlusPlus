#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string S;
	    string J;
	    int count = 0;
	    cin>>J>>S;
	    for(int index_S = 0; index_S < S.length(); index_S++){
	        for(int index_J = 0; index_J < J.length(); index_J++){
	            if(S[index_S] == J[index_J]){
	                count++;
	                break;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

