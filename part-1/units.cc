// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong0119
// Partners: @ethan888

#include <iostream>
#include <string>

#include "units_functions.h"

int main(int argc, char const *argv[]) {
  double milliliters{0.0};
  std::cout << " Enter ml: ";
  std::cin >> milliliters;
  double teaspoons{MlToTsp(milliliters)};
  double tablespoons{MlToTbsp(milliliters)};
  double ounces{MlToOz(milliliters)};
  double cups{MlToCup(milliliters)};
  std::cout << milliliters << " ml = " << teaspoons << " tsp = " << tablespoons
            << " tbsp = " << ounces << " oz = " << cups << " cups. \n";
  return 0;
}