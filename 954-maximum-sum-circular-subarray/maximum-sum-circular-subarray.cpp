class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=nums[0];
        int best= nums[0];
        int worst= nums[0];
        int ans= nums[0];
        int min_ans= nums[0];        
        for (int i=1;i<nums.size();i++){
            int a= nums[i];
            int b= nums[i]+best;
            int c= nums[i]+ worst;
            total= total+ nums[i];
            best= max(a,b);
            worst= min(a, c);
            ans=max(best,ans); 
            min_ans= min(worst, min_ans);
            }
        if(ans<0){
            return ans;
        }
        return max(ans, total-min_ans);
    }
};