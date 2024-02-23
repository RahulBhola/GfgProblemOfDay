//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&prices){
            //Write your code here..
            int initialProfitAfterTransaction1 = 0;
            int finalProfitAfterTransaction2 = 0;
            int buyTransaction1 = INT_MAX;
            int buyTransaction2 = INT_MAX;
            
            for(int i = 0; i < prices.size(); i++) {
                int currentPrice = prices[i];
                
                // Transaction 1: Update buyTransaction1 and initialProfitAfterTransaction1
                buyTransaction1 = min(buyTransaction1, currentPrice);
                initialProfitAfterTransaction1 = max(initialProfitAfterTransaction1, currentPrice - buyTransaction1);
                
                // Transaction 2: Update buyTransaction2 and finalProfitAfterTransaction2
                buyTransaction2 = min(buyTransaction2, currentPrice - initialProfitAfterTransaction1);
                finalProfitAfterTransaction2 = max(finalProfitAfterTransaction2, currentPrice - buyTransaction2);
            }
            
            return finalProfitAfterTransaction2;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends
