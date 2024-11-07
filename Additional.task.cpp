#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double laptop_price = 50.0;
    double mobile_price = 30.0;
    double tablet_price = 20.0;

    int laptop_stock = 10;
    int mobile_stock = 5;
    int tablet_stock = 8;

    int laptop_quantity;
    int mobile_quantity;
    int tablet_quantity;

    cout << "Enter the quantity of Laptop (available : " << laptop_stock << "): ";
    cin >> laptop_quantity;

    if (laptop_quantity > laptop_stock) 
    {
        cout << "Sorry, only " << laptop_stock << " units of Laptop are available." << endl;
        laptop_quantity = laptop_stock;
    }

    cout << "Enter the quantity of Mobile (available : " << mobile_stock << "): ";
    cin >> mobile_quantity;

    if (mobile_quantity > mobile_stock) 
    {
        cout << "Sorry, only " << mobile_stock << " units of Mobile are available." << endl;
        mobile_quantity = mobile_stock;
    }

    cout << "Enter the quantity of Tablet (available : " << tablet_stock << "): ";
    cin >> tablet_quantity;
    
    if (tablet_quantity > tablet_stock) 
    {
        cout << "Sorry, only " << tablet_stock << " units of Tablet are available." << endl;
        tablet_quantity = tablet_stock;
    }

    double total = (laptop_price * laptop_quantity) + (mobile_price * mobile_quantity) + (tablet_price * tablet_quantity);
    
    double Grand_total = (total > 200) ? total * 0.9 : total;

    double shipping = (Grand_total < 150) ? 15 : 0;
    double total_with_shipping = Grand_total + shipping;

    int loyalty_Points = (total_with_shipping > 300) ? 50 : 20;

    int payment_method;
    cout << "Select a payment method ( 1 for Credit Card , 2 for online transfer , 3 for Cash ) : ";
    cin >> payment_method; 
    double transaction_fee = (payment_method == 1) ? total_with_shipping * 0.02 :
                            (payment_method == 2) ? total_with_shipping * 0.03 : 0.0;
    double total_after_payment = total_with_shipping + transaction_fee;

    int customerType;
    cout << "Enter customer type ( 1 for Regular , 2 for VIP ) : ";
    cin >> customerType;
    double Final_Amount = (customerType == 2) ? total_after_payment * 0.95 : total_after_payment;

    cout << endl;
    cout << " Order Summary : " << endl;
    cout << "Laptop (x" << laptop_quantity << "): $" << laptop_price * laptop_quantity << endl;
    cout << "Mobile (x" << mobile_quantity << "): $" << mobile_price * mobile_quantity << endl;
    cout << "Tablet (x" << tablet_quantity << "): $" << tablet_price * tablet_quantity << endl;

    cout << "Subtotal : $" << total << endl;
    cout << "Discount : $" << total - Grand_total << endl;
    cout << "Shipping : $" << shipping << endl;
    cout << "Transaction Fee : $" << transaction_fee << endl;
    cout << "Total Amount to Pay : $" << Final_Amount << endl;
    cout << "Loyalty Points Earned : " << loyalty_Points << endl;

    return 0;
}