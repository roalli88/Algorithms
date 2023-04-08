#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <vector>
/* 
 * This program assumes an array of maximum size 9223372036854775807
 *
 *
 * */


template<typename T>
std::int64_t recursive_linear_search(std::vector<T> haystack, std::size_t n, std::size_t idx, T needle){
	if(idx > n){
		// returning -1 means "not found"
		return -1;
	}
	else{
		if (haystack.at(idx) == needle) {
			return idx;
		}
		else {
			return recursive_linear_search(haystack, n, idx + 1, needle);
		}
	}
}

