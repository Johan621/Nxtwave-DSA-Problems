#include <bits/stdc++.h>
using namespace std;

class solution {
public:
     bool hasQuickRepeatOrder(vector<int>& orders, int k) {
        unordered_map<int,int> st;
        int n = orders.size();
        for(int i=0;i<n;i++){
            if(st.find(orders[i]) != st.end()){
                if(i-st[orders[i]]<=k) return true;
            }
            st[orders[i]] = i;
        }
        return false;
    }
};
