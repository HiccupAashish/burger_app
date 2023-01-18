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

int main()
{

    string name;
    double Balance = 0.0;
    int loop = 0;
    vector<string> topping;

    vector<string> burger;

    cout << "Please Enter your Name" << endl;
    cin >> name;
    cout << "Enter the number of credits to add: " << endl;
    cin >> Balance;

    while (true)
    {
        int mainmenu;
        double price;
        int selectedburger, selectedtopping;

        // system("clear");
        cout << "******************** 🤠🤠🤠   Welcome To Aason Cafe 🤠🤠🤠   ********************" << endl;
        cout << " How can we help you today ? " << name << endl;

        cout << "1. See Menu" << endl;
        cout << "0 to Exit" << endl;
        cin >> mainmenu;
        if (mainmenu == 1)
        {

            for (int i = 1; i > 0; i++)
            {

                displayBurger();
                cin >> selectedburger;
                if (cin.fail())
                {
                    cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Please Select a Number from 1 to 3" << endl;
                }
                else if (selectedburger == 1)
                {
                    cout << "Small Burger has been selected. " << endl;
                    burger.push_back("Small Burger");
                    price += SMALL_BURGER_Price;
                    break;
                }
                else if (selectedburger == 2)
                {
                    cout << "Medium Burger has been selected." << endl;
                    burger.push_back("Medium Burger");
                    price += MEDIUM_BURGER_Price;
                    break;
                }
                else if (selectedburger == 3)
                {
                    cout << "Big Burger has been selected." << endl;
                    burger.push_back("Big Burger");
                    price = LARGE_BURGER_Price;
                    break;
                }

                else
                {
                    cout << "Please Choose one of the Options above" << endl;
                }
            }
            for (int i = 1; i > 0; i++)
            {
                displayTopping();
                cin >> selectedtopping;
                if (cin.fail())
                {
                    cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cout << "Please Select a Number from 1 to 6" << endl;
                }
                else if (selectedtopping == 1)
                {
                    cout << "Cheese has been added to your burger" << endl;
                    topping.push_back("Cheese");
                    price += CHEESE;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else if (selectedtopping == 2)
                {
                    cout << "Salad has been added to your burger" << endl;
                    topping.push_back("Salad");
                    price += SALAD;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else if (selectedtopping == 3)
                {
                    cout << "Bacon has been added to your burger" << endl;
                    topping.push_back("Bacon");
                    price += BACON;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else if (selectedtopping == 4)
                {
                    cout << "Ketchup has been added to your burger" << endl;
                    topping.push_back("Ketchup");
                    price += KETCHUP;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else if (selectedtopping == 5)
                {
                    cout << "Mayo has been added to your burger" << endl;
                    topping.push_back("Mayo");
                    price += MAYO;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else if (selectedtopping == 6)
                {
                    cout << "Extra Burger has been added to your burger" << endl;
                    topping.push_back("Extra Burger");
                    price += EXTRA_BURGER;
                    cout << "Would you like to add more toppings? (1 for yes, 0 for no)" << endl;
                    cin >> selectedtopping;
                    if (selectedtopping == 0)
                    {
                        break;
                    }
                }
                else
                {
                    cout << "Please Choose one of the Options above" << endl;
                }
            }

            cout << "Your total is $" << price << endl;
            cout << "Your burger is " << burger[loop] << endl;
            cout << "Your toppings are " << endl;
            for (int i = 0; i < topping.size(); i++)
            {
                cout << topping[i] << endl;
            }
            cout << "Would you like to go ahead with the order? (1 for yes, 0 for no)" << endl;
            cin >> selectedtopping;
            if (selectedtopping == 1)
            {
                cout << "Your order has been placed" << endl;
                cout << "Your burger is " << burger[loop] << endl;
                cout << "Your toppings are " << endl;
                for (int i = 0; i < topping.size(); i++)
                {
                    cout << topping[i] << endl;
                }
            }
            else if (selectedtopping == 0)
            {
                cout << "Your order has been cancelled" << endl;
            }
            else
            {
                cout << "Please Choose one of the Options above" << endl;
            }
        }
        else if (mainmenu == 0)
        {
            cout << "Thank you for visiting Aason Cafe" << endl;
            break;
        }

        else
        {
            cout << "Please Choose one of the Options above" << endl;
        }
    }
}
