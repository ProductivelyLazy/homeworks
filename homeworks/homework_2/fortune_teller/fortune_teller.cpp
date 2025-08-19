#include <iostream>
#include <array>
#include <map>
using std::cout, std::cin, std::endl;
using std::string, std::array, std::map;

int main() {
  cout << "Welcome to the fortune teller program!" << endl;

  cout << "Please enter your name:" << endl;
  string name{};
  cin >> name;

  cout << "Please enter the time of year when you were born:" << endl;
  cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
  string season{};
  cin >> season;

  array<string, 2> adjectives{};
  
  cout << "Please enter an adjective:" << endl;
  cin >> adjectives[0];

  cout << "Please enter another adjective:" << endl;
  cin >> adjectives[1];

  cout << "\nHere is your description:" << endl;

  const size_t adjective_index{name.length() % adjectives.size()};
  const string adjective = adjectives[adjective_index];

  const map<string, string> season_to_noun{
    {"spring", "STL guru"},
    {"summer", "C++ expert"},
    {"autumn", "coding beast"},
    {"winter", "software design hero"},
  };
  const string noun = season_to_noun.at(season);

  const array endings{
    "eats UB for breakfast",
    "finds errors quicker than the compiler",
    "is not afraid of C++ error messages",
  };
  const size_t ending_index{name.length() % endings.size()};
  const string ending = endings[ending_index];

  cout << name << ", the " << adjective << " " << noun << " that " << ending << endl;
}
