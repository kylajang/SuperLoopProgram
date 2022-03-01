#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main ()
{
  // Declaring my variables
  char input;
  int input_one;
  int input_two;
  int input_three;
  int sum = 0;

  // Creating an infinite loop until user selects q or Q
  bool flag = true;
  while (flag){
  // Creating a menu
  cout << "*** The Super Looper - Main Menu ***" << endl;
  cout << " " << endl;
  cout << "1. Loop with increment" << endl;
  cout << "2. Loop with decrement" << endl;
  cout << "3. Loop with summation" << endl;
  cout << "Q. Quit" << endl;
  cout << " " << endl;
  cout << "Please enter your choice: ";
  cin >> input;

  // Option 1 Incrementation
  switch (input) {
    case '1':
    cout << "Enter the number you want to increment to: ";
    cin >> input_one;
    // Incrementing to a certain integer for option 1
    for (int i = 0; i <= input_one; i++){
      cout << i << endl;
    }
    break;

    // Option 2 Decrementation
    case '2':
    cout << "Enter the number you want to decrement from: ";
    cin >> input_two;
    for (int i = input_two; i >= 0; i--){
      cout << i << endl;
    }
    break;

    // Option 3 Looping with summation
    case '3':
    cout << "Enter the number you want to sum up to: ";
    cin >> input_three;
    for (int i = 0; i <= input_three; i++){
    sum = sum + i;
      cout << sum << endl;
    }
    break;

    // If user selects q or Q to quit
    case 'q':
    cout << "Okay, quitting! Thank you for using this program." << endl;
    flag = false;
    break;

    case 'Q':
    cout << "Okay, quitting! Thank you for using this program." << endl;
    flag = false;
    break;

    // For any other invalid user input
    default:
    cout << "Invalid choice! Try again!" << endl;
  }
}
return 0;
}
