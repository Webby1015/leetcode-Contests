class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
            
        }
        vector<int>ocr(max+1,0);
        for(int i=0;i<nums.size();i++){
            
            ocr[nums[i]]++;
            
        }
        vector<int>pair(2,0);
        for(int i=0;i<max+1;i++){
            cout<<ocr[i]<<" ";
            if(ocr[i]!=0 && ocr[i]%2==0) pair[0]+=ocr[i]/2;
            if(ocr[i]!=0 && ocr[i]%2!=0) {
                pair[1]++;
                ocr[i]--;
                if(ocr[i]!=0) pair[0]+=ocr[i]/2;
            }
            
        }
        
        return pair;
        
        
    }
};
