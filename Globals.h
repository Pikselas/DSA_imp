#include<iostream>
#include<concepts>
#include<vector>
#include<algorithm>

template<typename T>
concept ArithMeticType = std::is_arithmetic_v<typename T::value_type>;