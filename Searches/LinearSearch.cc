#include <cstddef>
#include <exception>
#include <iostream>
#include <vector>
#include <cassert>


/**
* This is the more efficient version of linear search provided in the
* book using a sentinel value.
*/

template<typename T>
int LinearSearch(std::vector<T> hayStack, std::size_t n, T sentinel){
	//store the last item into last
	auto last = hayStack.at(n);
	//store the sentinel value into the last position in the array
	hayStack[n] = sentinel;
	//set the start index to zero. C++ uses zero as the first index position
	size_t idx = 1;
	//only one check is performed for each loop
	//the loop will terminate once the sentinel value is found
	while (hayStack[idx] != sentinel) {
		++idx;
	}
	//copy the previous last value back into the array
	hayStack[n] = last;
	if (idx < n || hayStack[n] == sentinel) {
		//The sentinel was found in the array
		return idx;
	}
    
	// The sentinel was not found in the array
	return -1;

	
}

int main(){
	std::vector<int> Array{2,3,5,1,2,7,8,9,15};

	//Error 4 is not in Array 
	//assert(LinearSearch(Array, Array.size()-1, 4) > -1);
    	//assert(LinearSearch(Array, Array.size()-1, 4) > -1);

	//ok 8 is in Array
	assert(LinearSearch(Array, Array.size()-1, 8) > -1);

}

