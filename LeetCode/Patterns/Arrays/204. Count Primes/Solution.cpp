class Solution {
public:
    int countPrimes(int n) {
        
        int prime=0;
        for(int i=2; i<n; i++){
            int cnt=0;
            for(int j=2; j*j<=i; j++){
                if(i%j == 0){
                    cnt++;
                }
            }
            if(cnt == 0) prime++;
        }
        return prime;
    }
};