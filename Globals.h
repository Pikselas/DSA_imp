#include<iostream>
#include<concepts>
#include<algorithm>

template<typename T>
concept Type = std::is_arithmetic_v<typename T::value_type>;