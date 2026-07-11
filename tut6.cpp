#include<iostream> 

using namespace std;

// This is a global variable. Think of it like a global target.
int targetSalary = 50; // In LPA (Crores coming soon)

int main(){
    
    //1.
    
    int localSalary = 10; 
    cout << "Starting package in hand: " << localSalary << " LPA" << endl;
    cout << "But the real dream is: " << ::targetSalary << " LPA! 🚀" << endl;


    //2. Float & Double
    // Checking how much space these decimals actually take on my Lenovo LOQ
    float f = 34.4f;
    long double d = 34.4L; 

    cout << "Size of a standard double: " << sizeof(34.4) << " bytes" << endl;
    cout << "Size of my optimized float: " << sizeof(34.4f) << " bytes" << endl;
    cout << "Size of heavy long double: " << sizeof(34.4L) << " bytes" << endl;


    //3. Reference Variables
    // Just like my friends call me by different names, one variable can have an alias.
    float mainAccountBalance = 455.0f;
    float gamingFund = mainAccountBalance; // gamingFund is just a nickname for the same money

    cout << "Original Balance: ₹" << mainAccountBalance << endl;
    cout << "Accessing via nickname: ₹" << gamingFund << endl;


    //4. Typecasting 
    int pizzaCount = 45;   
    float totalBill = 45.76; // Total cost with tax

    // Changing int to float just because we can
    cout << "Casting int to float (Style 1): " << (float)pizzaCount << endl;
    cout << "Casting int to float (Style 2): " << float(pizzaCount) << endl;

    //  the decimal point to get a round number of Rupees
    cout << "Casting float to int (Style 1): " << (int)totalBill << endl;
    cout << "Casting float to int (Style 2): " << int(totalBill) << endl;
    

    // Testing expressions with and without typecasting
    cout << "Raw Expression (keeps decimal): " << pizzaCount + totalBill << endl;
    cout << "Optimized Expression (Style 1): " << pizzaCount + int(totalBill) << endl;
    cout << "Optimized Expression (Style 2): " << pizzaCount + (int)totalBill << endl;

    return 0;
}
    