class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;

        while(n){
          if(n%2==1)cnt++;
          n=n/2;
        }
        return cnt;
    }
};
