/*
this question is from leetcode -  
Input: nums = [2,7,11,15], target = 9
 Output: [0,1]
 Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 */


#include <iostream>
using namespace std;
int main()
{
    int num[] = {2,7,11,15};
    int target = 9;
    

    size_t size = (sizeof(num)/sizeof(num[0]));
    for ( int i=0; i<size; i++)
    {
        for ( int j=i+1; j<size; j++)
        {
            int add = num[i] + num[j];
            if( add == target )
            {
                cout << "[" << i << "," << j <<"]"<< endl;
                return 0;
            }
            
        }
    }
    return 0;
}
