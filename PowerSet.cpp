//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(int index, string &s, vector<string> &ans, string k){
	        if(index == s.size()){
	            if(k != ""){
	                ans.push_back(k);
	            }
	            return;
	        }
	        k+=s[index];
	        solve(index+1, s, ans, k);
	        k.pop_back();
	        solve(index+1, s, ans, k);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    solve(0,s, ans, "");
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends
