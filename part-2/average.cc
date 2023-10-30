//Adrian Butrus 
//adrianbutrus6@csu.fullerton.edu
//@adrianbutrus2
//Partner:@ericklrobles

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

if (arguments.size() <= 1) {
  std::cerr << "error: please provide at least one command line argument.\n";
}

double sum = 0.0; 

for (int i = 1; i < arguments.size(); ++i) {
    try {
      double number = std::stod(arguments[i]);
      sum += number;
      } catch (const std::invalid_argument& e) {
      std::cerr << "Error: Invalid argument - " << arguments[i] << "\n";
      return 1;
      }
  }

int numArgs = arguments.size() - 1;
  double average = sum / numArgs;
  std::cout << "average = " << average << "\n";

  return 0;
}
