//sum all divisor 1 to N.

#include<bits/stdc++.h>
using namespace std;

void allDivisor(int n)
{   
   
    for(int i=1; i<=n; i++)
    {
         int sum=0;
        if(n%i==0)
        {
          sum+=i;
        }
    }
    cout<<sum<<endl;
}

int main()
{  
    int n;
    cin >> n;
   allDivisor(n);
    return 0;
}