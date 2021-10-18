/**
 * @file 
 * \implementation of mapping function 
 * @see https://www.geeksforgeeks.org/python-map-function/
 * @details
 *  numbers = (1, 2, 3, 4)
 *  result = map(lambda x: x + x, numbers)
 *  print(list(result))
 *  This takes in a function and this function operates on the list provided
 *  in the end the final output of a map function is a single digit value
 *  @author Akshat Sahijpal
 */

#include <iostream>
#include <vector>
#define print(x) std::cout << x << std::endl

/**
 * @tparam T Datatype can be any
 * @param fun The function that performs the main operation on the list
 * @param v the list upon which the function performs an operation
 * @return A single digit value is returned
 */
template <typename T>
T map(int (*fun)(T),std::vector<T> v){
    T res;
    for (auto i : v){
        res += fun(i);
    }
    return res;
}
/**
 * \Input Function provided inside the map
 * @param T Datatype
 * @return
 */
int fun(int T){
    return T;
}
int fun2(int T){ 
   return T+1;
}

/**
 * @brief Self-test implementations
 * @returns void
 */
static void test() {
    std::vector<int> list = {1,1,1,2};
    assert(map<int>(fun, list) == 5); // this ensures that the algorithm works as expected  
    assert(map<int>(fun2, list) == 9); // this ensures that the algorithm works as expected  
}
/**
 * @brief Main Function
 * \Creates a vector upon which the function fun performs
 * \returns 0 on exit
 */
int main(int argc, char const *argv[])
{
    test();
    return 0;
}
