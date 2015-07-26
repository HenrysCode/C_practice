#include<iostream>
#include<string>
//#include "C_practice/Utils/sorting.h"
#include "../../Utils/sorting.h"


bool isUniqueChars(std::string input);
bool isUniqueChars2(std::string input);
bool isUniqueChars3(std::string& input);

int main(){
  std::string test2 = " ";
  std::cout << "The string " << test2;

  if(!isUniqueChars3(test2))
    std::cout << " contains a duplicate" << std::endl; 
  else
    std::cout << " has no duplicate chars" << std::endl;
}
//     O(N) time / O(N) space
//------------------------------------------------
bool isUniqueChars(std::string input) {
  bool chars[256];
  for(int i = 0; i < input.length(); i++){
    if(chars[input[i]])
      return false;
    chars[input[i]] = true;
  }
  return true;
}

/////answers using no extra data structures////

//     O(N^2) time / no space
//------------------------------------------------
bool isUniqueChars2(std::string input) {
  if(input.length() == 0)
    return true;
  
  for(int i = 0; i < input.length() - 1; i++){
    for(int j = i + 1; j < input.length(); j++){
      if (input[i] == input[j])
	return false;
    }
  }
  return true;
}

// if allowed to destroy string, can sort then check
//each char in sorted string against neighbours
//must use an inplace sorting algorithm
//     O(NlogN) time / no space
//------------------------------------------------
bool isUniqueChars3(std::string& input) {
  if(input.length() == 0)
    return true;
  heapSort(input, input.length());
  for(int i = 0; i < input.length() -1; i++) {
    if(input[i] == input[i+1])
      return false;
  }
  return true;
}
    
