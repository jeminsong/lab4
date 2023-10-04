// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong0119
// Partners: @ethan888
#include <iostream>
int main(int argc, char const *argv[]) {
  int guess = -1;
  int secret_number = 0;
  int attempts = 0;
  const int max_attempts = 2;
  std::cout << "Player 1, enter the secret number: ";
  std::cin >> secret_number;
  std::cout << "Player 2, enter your first guess: ";
  std::cin >> guess;
  if (guess == secret_number) {
    std::cout << "Correct, you win!" << std::endl;
    return 0;
  }
  if (guess < secret_number) {
    std::cout << "Too low" << std::endl;
    attempts++;
  }
  if (guess > secret_number) {
    std::cout << "Too high" << std::endl;
    attempts++;
  }
  std::cout << "Player 2, enter your second guess: ";
  std::cin >> guess;
  if (guess == secret_number) {
    std::cout << "Correct, you win!" << std::endl;
    return 0;
  }
  attempts++;
  if (attempts == max_attempts) {
    std::cout << "Incorrect, the secret number was " << secret_number
              << ", you lose \n";
    return 0;
  }
  return 0;
}