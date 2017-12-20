# Remove_duplicate
#wrong understanding
#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
	vector<int> count;
	vector<int> length;
	vector<int> removeDuplicates(vector<int> nums) 
	{
		for (int i = 0; i < nums.size(); i++)
		{
			count.push_back(nums[i]);
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[j] == nums[i])
					nums.erase(nums.begin()+j);
			}
		}

		for (int k = 0; k < count.size(); k++)
		{
			length.push_back(k + 1);
			cout << length[k];
		}
			
		return length;
	}
};

void main()
{
	Solution solution;
	solution.removeDuplicates({ 1,1,2});
}
