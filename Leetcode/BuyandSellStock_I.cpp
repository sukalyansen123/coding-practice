#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {

 int maxprofit = 0;
        int numDays = prices.size();
        if(numDays == 1 || numDays == 0)
            return 0;
        int minSoFar = prices[0];
        
        for (int i=1; i<numDays;i++) {
            if(prices[i] - minSoFar > maxprofit)
                maxprofit = prices[i]-minSoFar;
            if(prices[i]<minSoFar)
                minSoFar = prices[i];
        }
        
        return maxprofit;
}