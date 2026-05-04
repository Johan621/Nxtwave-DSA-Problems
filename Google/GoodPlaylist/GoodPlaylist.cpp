#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    long long countGoodPairs(vector<int>& A, int k) {
       //Write Your Code Here...
       long long cnt = 0;
       int n = A.size();
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               long long sum = A[i] + A[j];
               if(sum % k == 0) cnt++;
           }
       }
       return cnt;
    }
};