#include <iostream>
using namespace std;

int main() {
  cout << "Hello, Welcome to Franks Carpet Cleaning Service" << endl;
  
  int small_rooms(0);  // Using parentheses for initialization
  cout << "\nHow many small rooms would you like cleaned?";
  cin >> small_rooms;

  int large_rooms(0);  // Using parentheses for initialization
  cout << "\nHow many large rooms would you like cleaned?";
  cin >> large_rooms;

  cout << "\nEstimate for carpet cleaning service" << endl;
  cout << "Number of small rooms" << small_rooms << endl;
  cout << "number of large rooms" << large_rooms << endl;
  cout << "Price per small room:$" << 25 * small_rooms << endl;
  cout << "Price per large room:$" << 35 * large_rooms << endl;
  cout << "Tax on small rooms:$" << 25 * small_rooms * 0.06 << endl;
  cout << "tax on large rooms:$" << 35 * large_rooms * 0.06 << endl;
  cout << "=================================" << endl;
  cout << "total estimate:$" << (25 * small_rooms) + (25 * small_rooms * 0.06) + (35 * large_rooms) + (35 * large_rooms * 0.06) << endl;
  cout << "This estimate is valid for" << 30 << "days" << endl;

  cout << endl;

  return 0;
}
