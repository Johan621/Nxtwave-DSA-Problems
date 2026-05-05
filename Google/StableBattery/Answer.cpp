#include <bits/stdc++.h>
using namespace std;

class solution {
public:
     bool isStableChargeCycle(int num) {
        while(num != 1 && num != 4){
            int rem = 0;
            while(num>0){
                int digit = num%10;
                rem = rem + digit*digit;
                num = num/10;
            }
            num = rem;
        }
        return num == 1;
    }
};
