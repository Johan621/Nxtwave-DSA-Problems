#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool hasHalf(vector<int>& arr, int n) {

        sort(arr.begin(), arr.end());

        int i = 0, j = 1;

        while (j < n) {

            if (arr[i] * 2 == arr[j]) {
                return true;
            }
            else if (arr[i] * 2 < arr[j]) {
                i++;
            }
            else {
                j++;
            }

            if (i == j) {
                j++;
            }
        }

        return false;
    }
};