#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n==0){
                return 0;
            }
            int first = maxSum(n/2);
            int second = maxSum(n/3);
            int third = maxSum(n/4);
            return max(n, first+second+third);
        }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
