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
    
    double grandTotal = (total > 3500) ? total * 0.9 : total;
    
    double shipping = (grandTotal <= 2000) ? 15 : 0;
    double total_with_shipping = grandTotal + shipping;
    
    int loyalty_points = (total_with_shipping > 3000) ? 50 : 20;
    
    cout << endl;
    cout << "Grand Total after discount and shipping : $" << total_with_shipping <<" only." << endl;
    
    cout << "Loyalty points earned : " << loyalty_points << endl;

    return 0;
}