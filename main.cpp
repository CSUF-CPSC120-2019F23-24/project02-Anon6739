// Name:Andrew Solis
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  int days;
  std::string location;
  double hotel_expense, meal_expense, total;
  std::stringstream sshotel_expense, ssmeal_expense, sstotal;

  //Asking the right questions
  std::cout << "What is the business trip location? ";
  getline(std::cin, location); //added getline to limit the range of letters possible
  location = location.substr(0,20);


  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_expense;
  sshotel_expense << std::fixed << std::setprecision(2) << hotel_expense; //added setprecision to limit decimal spaces to be more exact with outputs

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_expense;
  ssmeal_expense << std::fixed << std::setprecision(2) << meal_expense;

  //Adding Hotel and Meal expenses for the Total
  total = static_cast<double>(hotel_expense + meal_expense);
  sstotal << std::fixed << std::setprecision(2) << total;

  //Header Row; converted outputs with an .str to apply changes made above with the setprecision.
  std::cout << std::setw(20) << "Location" << std::setw(15) << "Days" << std::setw(15) << "Hotel" << std::setw(15) << "Meal" << std::setw(15) << "Total" << std::endl;
  std::cout << std::setw(25) << location << std:: setw(10) << days << std::setw(9) << '$' << sshotel_expense.str() << std::setw(9) << '$' << ssmeal_expense.str() << std::setw(9) << '$' << sstotal.str() << std::endl;
  return 0;
}
