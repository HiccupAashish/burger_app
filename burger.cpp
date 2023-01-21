#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <limits>

const double SMALL_BURGER_Price = 3.0;
const double MEDIUM_BURGER_Price = 5.50;
const double LARGE_BURGER_Price = 7.25;

const double CHEESE = 0.80;
const double SALAD = 0.50;
const double BACON = 1.0;
const double KETCHUP = 0.30;
const double MAYO = 0.30;
const double EXTRA_BURGER = 1.50;

void displayBurger()
{
  cout << "_____________________________" << endl;
  cout << "1. Small Burger   - $" << SMALL_BURGER_Price << endl
       << endl;
  cout << "2. Medium Burger- $" << MEDIUM_BURGER_Price << endl
       << endl;
  cout << "3. Large Burger - $" << LARGE_BURGER_Price << endl
       << endl;
}

void displayTopping()
{
  cout << "Please Select a Topping for your burger" << endl;
  cout << "1. Cheese 🧀🧀" << endl;
  cout << "2. Salad 🥗🥗" << endl;
  cout << "3. Bacon 🥓🥓 " << endl;
  cout << "4. Ketchup 🍅🍅" << endl;
  cout << "5. Mayo 🍯🍯" << endl;
  cout << "6. Extra Burger 🍔🍔" << endl;
}

bool isValidInput() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

void History(vector<string> Burger, vector<vector<string>> Final_topping, vector<double> Total)
{
  if (Burger.size() > 0)
  {
    for (int i = 0; i < Burger.size(); i++)
    {
      cout << "Order Number " << i + 1 << endl;
      cout << "You ordered a " << Burger[i] << "with the following toppings: " << endl;
      for (int j = 0; j < Final_topping[i].size(); j++)
      {
        cout << Final_topping[i][j] << endl;
      }

      cout << "your Total was " << Total[i] << endl;
    }
    cout << "Press any key to go back to main menu" << endl;
    int x;
    cin >> x;
  }
  else
  {
    int x;
    cout << "Sorry No history Found" << endl;
    cout << "Press any key to go back to main menu" << endl;
    cin >> x;
  }
}
void Menu(vector<string> &Burger, vector<vector<string>> &Final_topping, vector<double> &Total, double &Balance)
{
  
  string burger;
  double price;
  vector<string> topping;

  while (true)
  {
    int selectedburger;
    displayBurger();
    cin >> selectedburger;
    if (isValidInput() == false) {
        cout << "Please enter a valid number" << endl;
        
    }
     else if (selectedburger == 1)
    {
      cout << "You have selected a Small Burger" << endl;
      burger = "Small Burger";
      price = SMALL_BURGER_Price;
      break;
    }
    else if (selectedburger == 2)
    {
      cout << "You have selected a Medium Burger" << endl;
      burger = "Medium Burger";
      price = MEDIUM_BURGER_Price;
      break;
    }
    else if (selectedburger == 3)
    {
      cout << "You have selected a Large Burger" << endl;
      burger = "Large Burger";
      price = LARGE_BURGER_Price;
      break;
    }
    else if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Please enter a valid number" << endl;
      break;
    }
    else
    {
      cout << "Please Choose one of the Options above" << endl;
    }
  }
  while(true){
  int selectedtopping;
  displayTopping();
  cin >> selectedtopping;
  if(isValidInput()==false){
      cout << "Please enter a valid number" << endl;
  }
  
  else if (selectedtopping == 1)
  {
    cout << "Cheese has been added to your Burger" << endl;
    topping.push_back("Cheese");
    price += CHEESE;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (selectedtopping == 2)
  {
    cout << "Salad has been added to your Burger" << endl;
    topping.push_back("Salad");
    price += SALAD;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (selectedtopping == 3)
  {
    cout << "Bacon has been added to your Burger" << endl;
    topping.push_back("Bacon");
    price += BACON;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (selectedtopping == 4)
  {
    cout << "Ketchup has been added to your Burger" << endl;
    topping.push_back("Ketchup");
    price += KETCHUP;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (selectedtopping == 5)
  {
    cout << "Mayo has been added to your Burger" << endl;
    topping.push_back("Mayo");
    price += MAYO;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (selectedtopping == 6)
  {
    cout << "Extra Burger has been added to your Burger" << endl;
    topping.push_back("Extra Burger");
    price += EXTRA_BURGER;
    cout << "Do you want to add more toppings? (Y/N)" << endl;
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
      continue;
    }
    else if (choice == 'N' || choice == 'n')
    {
      break;
    }
    else
    {
      cout << "Please enter a valid choice" << endl;
    }
  }
  else if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Please enter a valid number" << endl;
      break;
    }
  else
  {
    cout << "Please Choose one of the Options above" << endl;
  }
  }
  cout << "Your Burger is " << burger << " with the following toppings: " << endl;
  for (int i = 0; i < topping.size(); i++)
  {
    cout << topping[i] << endl;
  }
  cout << "Your Total is " << price << endl;
  cout << "Would you like to process your order? (Y/N)" << endl;
  char choice;
  cin >> choice;
  if (choice == 'N' || choice == 'n')
  {
    cout << "Press any key to go back to main menu" << endl;
    int x;
    cin >> x;
    return;
  }
  else if (choice == 'Y' || choice == 'y' && Balance >= price)
  {
    Burger.push_back(burger);
    Final_topping.push_back(topping);
    Total.push_back(price);
    Balance -= price;
    cout << "Your Order is being processed" << endl;
    cout << "Your Order will be ready in 5 minutes" << endl;
    cout << "Your Balance is " << Balance << endl;
    cout << "Press any key to go back to main menu" << endl;
    int x;
    cin >> x;
  }
  else if (choice == 'Y' || choice == 'y' && Balance < price)
  {
    cout << "You do not have enough credits to process this order" << endl;
    cout << "Press any key to go back to main menu" << endl;
    int x;
    cin >> x;
  }
  else
  {
    cout << "Please enter a valid choice" << endl;
  }
}

int main()
{
  string name;
  double Balance = 0.0;
  vector<string> Burger;
  vector<vector<string>> Final_topping;
  vector<double> Total;

  cout << "Please Enter your Name" << endl;
  cin >> name;
  cout << "Enter the number of credits to add: " << endl;
  cin >> Balance;

  while (Balance > 0)
  {

    int mainmenu;
    system("clear");
    cout << "******************** 🤠🤠🤠   Welcome To Aason Cafe 🤠🤠🤠   ********************" << endl;
    cout << " How can we help you today ? " << name << endl;
    cout << "1. View History" << endl;
    cout << "2. See Menu" << endl;
    cin >> mainmenu;
    if (mainmenu == 1)
    {
      History(Burger, Final_topping, Total);
    }
    else if (mainmenu == 2)
    {

      Menu(Burger, Final_topping, Total, Balance);
    }
    else
    {
      cout << "Please Choose one of the Options above" << endl;
    }
  }
  cout << "Sorry you have no more credits" << endl;
  cout << "Please add more credits to continue" << endl;
  
}
