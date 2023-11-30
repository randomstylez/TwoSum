class Solution {
public:
  vector<int>twoSum(vector<int>& nums, int target){
    //Solution starts here
    int n = nums.size(); //First we need a way to know the size of the nums array
    for( i = 0; i < n - 1; i++){ // Next we have i index to the 0 element in the array, making sure to exclude the last element which will be reserved for j to index to
      for( j = n + 1; j < n; j++){ // j is indexed to start at index 1 of the array to add with i to check for solutions that equal the target
        if( nums[i] + nums[j] == target){ // checks to see if i + j equals the target
          return{i,j};
        }
      }
    }
    return{}; //accounts for any sum of numbers in the twoSum vector that do not equal the target.
  }
};        
