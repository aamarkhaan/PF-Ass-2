#include <iostream>
using namespace std;

int main()
{
    double laptop = 450.0;
    double mobile = 200.0;
    double tablet = 300.0;
    
    int quantity_of_laptop;
    int quantity_of_mobile;
    int quantity_of_tablet;

    cout << "Enter the quantity of Laptop you want to buy [ $450 EACH ] : ";
    cin >> quantity_of_laptop;
    
    cout << "Enter the quantity of Mobile you want to buy [ $200 EACH ] : ";
    cin >> quantity_of_mobile;
    
    cout << "Enter the quantity of Tablet you want to buy [ $300 EACH ] : ";
    cin >> quantity_of_tablet;

    double total = (laptop * quantity_of_laptop) + (mobile * quantity_of_mobile) + (tablet * quantity_of_tablet);
    
    cout << endl;
    cout << "Grand Total : $" << total <<" only." << endl;

    return 0;
}