#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "hi, human";
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');

  std::vector<char> result;

  for(int i = 0; i < input.size(); i++) {
    for(int j = 0; j < vowels.size(); j++) {
      if(vowels[j] == input[i]) {
        if(input[i] == 'e' || input[i] == 'u') {
          result.push_back(input[i]);
        }
        result.push_back(input[i]);
      }
    }
  }
  for(int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "\n";
}
