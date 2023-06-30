//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum= 0;
     int duplicateOf_n=n;
     while(n>0)
     {
        int lastDigit= n %10;
        sum=sum+(lastDigit*lastDigit*lastDigit);

        n= n/10;
     }
     if(duplicateOf_n==sum)
      return "Yes";

     else 
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends