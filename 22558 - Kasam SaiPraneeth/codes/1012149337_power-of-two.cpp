class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <=0)
            return 0;
        while(n%2 == 0)
            n/=2;
        return n==1;
    }
};