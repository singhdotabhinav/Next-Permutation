//The problem is to find the next permutation for the given number 
//In the brute force we will be having time complexity of o(n!)
//The other approach here is : Find the permutation just after the given number by simple array manipulation



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i=nums.size()-2;
        while(i>=0 && nums[i]>=nums[i+1])
            i--;
           
        if(i>=0)
        {
            int j=nums.size()-1;
            while(j>=0&&nums[j]<=nums[i])
                j--;
            swap(nums[i],nums[j]);
        }
        
        
        i+=1;
        int j=nums.size()-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
            
        }  
    }
};
