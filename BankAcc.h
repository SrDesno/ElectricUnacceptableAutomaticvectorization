#ifndef BankAcc_h
#define BankAcc_h
class BankAcc {
public:
  BankAcc();
  BankAcc(int n, double s);
  int getAccNumber() { return accNumber; }
  void setAccNumber(int n) { accNumber = n; }
  double getBalance() { return balance; }
  void setBalance(double s) { balance = s; }
  void deposit(double amount);
  bool withdrawal(double amount); // it has to be overriden in Commission Bank
  Account class void
  print(); // it has to be overriden in the commissin bank account
  class protected : int accNumber;
  double balance;
};
BankAcc::BankAcc() {
  accNumber = 0;
  balance = 0;
}
BankAcc::BankAcc(int n, double s) {
  accNumber = n;
  balance = s;
}
void BankAcc::deposit(double amount) { balance += amount; }
// if there is enough money, subtracts the amount from the balance and returns
true, otherwise the balance remains unchanged and returns false.bool
      BankAcc::withdrawal(double amount) {
  if (balance >= amount) {
    balance -= amount;
    return true;
  } else
    return false;
}
void BankAcc::print() {
  cout << endl;
  cout << "Account Number: " << accNumber << " balance: " << balance << endl;
}
#endif /* BankAcc_h */