#include <iostream>
#include <random>
using std::cout, std::endl, std::cin;

int main() {
  cout << "Welcome to the GUESSING GAME!" << endl;
  cout << "I will generate a number and you will guess it!" << endl;
  int low_bound{};
  cout << "Please provide the smallest number:" << endl;
  cin >> low_bound;
  int high_bound{};
  cout << "Please provide the largest number:" << endl;
  cin >> high_bound;

  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution distribution{low_bound, high_bound};
  int rand_num = distribution(random_engine);

  cout << "I've generated a number. Try to guess it!" << endl;
  // cout << "{pst!} secret_number = " << rand_num << endl;

  int guess{};
  int guess_count{};
  do {
    cout << "Please provide the next guess:" << endl;
    cin >> guess;

    if (guess < rand_num)
      cout << "Your number is too small. Try again!" << endl;
    else if (guess > rand_num)
      cout << "Your number is too big. Try again!" << endl;

    guess_count++;

  } while (guess != rand_num);

  cout << "You've done it! You guessed the number " << rand_num << " in " << guess_count << " guesses!" << endl;
}
