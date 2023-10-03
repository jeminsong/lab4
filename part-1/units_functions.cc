// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong0119
// Partners: @ethan888

#include "units_functions.h"

double MlToTsp(double volume) {
  double teaspoons = (volume / 4.929);
  return teaspoons;
}
double MlToTbsp(double volume) {
  double tablespoons = MlToTsp(volume / 3.0);
  return tablespoons;
}
double MlToOz(double volume) {
  double ounces = MlToTbsp(volume / 2.0);
  return ounces;
}
double MlToCup(double volume) {
  double cups = MlToOz(volume / 8.0);
  return cups;
}