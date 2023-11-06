// Adrian Butrus
// adrianbutrus6@csu.fullerton.edu
// @adrianbutrus2
// Partners:@ericklrobles

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  bool none{true};

  for (std::string& argument : arguments) {
    if (none) {
      none = false;
      continue;
    }
    sum += stod(argument);
  }

  int num_args{static_cast<int>(arguments.size() - 1)};
  double average = sum / num_args;
  std::cout << "average = " << average << "\n";
  return 0;
}