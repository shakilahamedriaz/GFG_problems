#include<bits/stdc++.h>
using namespace std;

int countEvenlyDivisible(int num) {

        int n = N;
        int count = 0;
        while(n>0){
            int temp = n%10;
            if(temp != 0 && N%temp == 0)
                count++;
            n = n/10;    
        }
        return count;
    }


int main()
{

        int num;
        cin>>num;
        
        cout<< "Total evenlyCOuntDigit is: "<<countEvenlyDivisible(num)<<endl;

    return 0;
}