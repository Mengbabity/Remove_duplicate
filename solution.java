package remove_duplicate;

public class solution 
{
	public int remove(int[] nums)
	{
		int i = 0;
		for (int j = 1; j < nums.length; j++)
		{
			if (nums[j] != nums[i])
			{
				i++;
				nums[i] = nums[j];
			}
		}

		for (int k = 0; k < nums.length; k++)
			System.out.print(nums[k]+" ");

		return i + 1;
	}

}
