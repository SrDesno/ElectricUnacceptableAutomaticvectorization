#include <iostream>
using namespace std;
#include "CommAcc.h"
int main() {
  BankAcc *accList[20];
  int sizeAccList;
  char accType;
  int accId;
  double initialBalance, comm, amount;
  char option;
  cout << "How many bank accounts are there? ";
  cin >> sizeAccList;
  for (int c = 0; c < sizeAccList; c++) {
    cout << "Your account will be regular or commision? (r or c) ";
    cin >> accType;
    cout << "Account number? ";
    cin >> accId;
    cout << "Initial Balance? ";
    cin >> initialBalance;
    // TODO: Create the object according to the type of account
    // TODO: And put the object in the array of pointers to objects
    if (accType == 'c') {
      cout << "Commision fee for withdrawal? ";
      cin >> comm;
    }
  }
  do {
    cout << "Options " << endl;
    cout << endl;
    cout << "a) deposit " << endl;
    cout << "b) withdrawal " << endl;
    cout << "c) display balance " << endl;
    cout << "d) exit " << endl;
    cout << "option ->";
    cin >> option;
    switch (option) {
    case 'a': {
      cout << "Account number? ";
      cin >> accId;
      cout << "Amount to deposit? ";
      cin >> amount;
      // TODO: Make the deposit to the correct account
      break;
    }
    case 'b': {
      cout << "Account number? ";
      cin >> accId;
      cout << " Amount to withdrawal? ";
      cin >> amount;
      // TODO: Make the withdrawal to the correct account
      break;
    }
    case 'c': {
      cout << "Account number? ";
      cin >> accId;
      // TODO: Display the balance of the account
      break;
    }
    }
  } while (option != 'd');
  return 0;