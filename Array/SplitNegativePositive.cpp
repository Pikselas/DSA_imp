#include"../Globals.h"

/*
    Taking two-pointer approach

    if the left pointed element is negative -> increment left
    if the right pointed element is positive -> decrement right
    if both are false swap and increment

*/

template<ArithMeticType vect>
void SplitNegativeAndPositive(vect& arr_1)
{
    size_t left = 0 , right = arr_1.size() - 1;
    while(left < right)
    {
        bool LeftIsPositive = arr_1[left] >= 0;
        bool RightIsNegative = arr_1[right] < 0;

        if(LeftIsPositive && RightIsNegative)
        {
            std::swap(arr_1[left] , arr_1[right]);
            ++left;
            --right;
        }
        else
        {
            if(!LeftIsPositive)
            {
                ++left;
            }
            if(!RightIsNegative)
            {
                --right;
            }
        }
    }

}

int main()
{
    std::vector<int> x = {-1 , 3, 4, -2 , 6 , -8};
    SplitNegativeAndPositive(x);
    for(int elm : x)
    {
        std::cout << elm <<'\n';
    }
    return 0;
}