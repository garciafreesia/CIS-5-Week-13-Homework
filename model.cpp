#include <iostream>
#include <string>

// Practice 13 · Part 2 — Freesia Garcia
// CIS 5 Week 13 · The struct your final needs

// Montly Expenses
struct Expense {
  std::string name;
  double balance;
};

void printExpense(const Expense& a) {
  std::cout << e.category << " " << e.amount << "\n";
}

int main() {
  Expense e1 = {"Food", 120.75};
  Expense e2 = {"Gas", 75.35};

  printExpense(e1);
  printExpense(e2);
  
  return 0;
}
