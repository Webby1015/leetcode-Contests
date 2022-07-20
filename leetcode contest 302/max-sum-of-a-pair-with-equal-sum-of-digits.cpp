class Solution {
public:
    
    int sum(int n){
        int sum=0;
        while(n!=0){
            
            sum+=n%10;
            n=n/10;
            
        }
        
        return sum;
        
    }
    int maximumSum(vector<int>& nums) {
        int max=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(sum(nums[i])==sum(nums[j]) && nums[i]+nums[j]>max) max=nums[i]+nums[j];
                
            }
                
            
            
        }
        
        return max;
        
    }
};
