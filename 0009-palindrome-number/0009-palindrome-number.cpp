class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) 
        return false;
        int n = x;
        int dup = n;
        long long revnum = 0;
        while(n>0){
            int ld = n%10;
            revnum = (revnum*10)+ld;
            n = n/10;
        }
        if(revnum == dup) return true;
        else return false;
        
    }
};