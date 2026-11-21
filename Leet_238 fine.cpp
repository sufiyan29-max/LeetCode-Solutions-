// Fine coz  the soln can be more optimzed 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer ;
        int n =nums.size() ;
            vector <int> pre(n,1) ;
            vector <int> suf(n,1);
        for(int i = 1; i< nums.size()  ; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }
        for(int i = nums.size() - 2 ; i>=0 ; i--){
            suf[i] = suf[i+1] *nums[i+1] ;
        }

        for(int i =0 ; i<nums.size() ; i++){
            answer.push_back( pre[i]*suf[i])  ;
        }
        return answer ;
    }
};