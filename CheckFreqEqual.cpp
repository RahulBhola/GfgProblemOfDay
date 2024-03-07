//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string str)
	{
	    // code here 
	    unordered_map<char,int>m;
	    for(int i=0;i<str.size();i++){
	        m[str[i]]++;
	    }
	   
	    set<int>s;
	    for(auto i:m){
	        s.insert(i.second);
	    }
	     if(s.size() > 1){
    	    int maxi=0;
    	    for(auto it:m){
    	        maxi=max(maxi,it.second);
    	    }
    	    int cpu=0;
    	    for(auto it:m){
    	        if(maxi==it.second){
    	            cpu++;
    	        }
    	    }
    	    if(cpu>1){
    	        return false;
    	    }
	    }
	    if(s.size()>2){
	        return false;
	    }
	    if(s.size()==1){
	        return true;
	    }
	    int a[2],l=0;
	    for(auto k:s){
	        a[l]=k;
	        l++;
	    }
	    int ans=abs(a[0]-a[1]) ;
	    if(ans==1){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
