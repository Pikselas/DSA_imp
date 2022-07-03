#include<vector>
#include"../Globals.h"

template<Type vect>
[[nodiscard]] 
auto MergeSortedArray(const vect& arr_1 , const vect& arr_2)
{
    vect arr;
    arr.reserve(arr_1.size() + arr_2.size());

    size_t i = 0 , j = 0;

    //push elements smaller than the other one until one of them ends
    while(i < arr_1.size() && j < arr_2.size())
    {
        if(arr_1[i] < arr_2[j])
        {
            arr.push_back(arr_1[i]);
            ++i;
        }
        else
        {
            arr.push_back(arr_2[j]);
            ++j;
        }
    }

    //push rest of the elements
    std::copy(arr_1.begin() + i , arr_1.end() , std::back_inserter(arr));
    std::copy(arr_2.begin() + j , arr_2.end() , std::back_inserter(arr));
    return arr;
}

int main()
{
    for(auto elem : MergeSortedArray(std::vector<int>{1 ,3 ,5 , 8} , std::vector<int>{2 ,4 ,6 , 9}))
    {
        std::cout << elem <<'\n';
    }
    return 0;
}