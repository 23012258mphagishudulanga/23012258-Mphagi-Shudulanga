#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double merchandise_cost, total_salaries, yearly_rent, electricity_cost;

   
    cout << "Enter the total cost of the merchandise: ";
    cin >> merchandise_cost;

    cout << "Enter the total salary of the employees (including your Linda's): ";
    cin >> total_salaries;

    cout << "Enter the yearly rent of store: ";
    cin >> yearly_rent;

    cout << "Enter the estimated electricity cost for the store: ";
    cin >> electricity_cost;

    
    double total_expenses = total_salaries + yearly_rent + electricity_cost;

    
    double desired_net_profit = 0.10 * merchandise_cost;

    
    double final_selling_price = merchandise_cost + total_expenses + desired_net_profit;

    double markup_before_sale = final_selling_price / (1 - 0.15);

   
    double markup_percentage = ((markup_before_sale - merchandise_cost) / merchandise_cost) * 100;

    cout << fixed << setprecision(2);
    cout << "The merchandise should be marked up by " << markup_percentage << "% to achieve a 10% net profit after a 15% sale." << endl;

return 0;
}

    