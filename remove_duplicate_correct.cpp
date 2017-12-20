#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
	int removeDuplicates(vector<int> &nums) 
	{
		int i = 0;
		if (nums.size() == 0)
			return 0;
		for (int j = 1; j < nums.size(); j++)
		{
			if (nums[j] != nums[i])
			{
				i++;
				nums[i] = nums[j];
			}
		}
		for (int k = 0; k < nums.size(); k++)
			cout << nums[k] << endl;

		return i + 1;
	}
};

void main()
{
	Solution solution;
	int array[3] = { 1, 1, 2 };
	vector<int> v1;
	for (int i = 0; i < 3; i++)
		v1.push_back(array[i]);
	solution.removeDuplicates(v1);
}
