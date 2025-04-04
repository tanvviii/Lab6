class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> table;
            for(int i=0; i<nums.size(); i++)
            {
                int comp = target - nums[i];
                if(table.find(comp) != table.end())
                {
                    return {table[comp],i};
                }
                table[nums[i]]=i;
            }
            return {};
        }
    };