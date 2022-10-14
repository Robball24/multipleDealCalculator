// Austin Ballard. Project 3.
//
#include <cmath>
#include <iomanip>
#include <iostream>


using namespace std;



double optionOne(double netPrice, double copiesSold) {
    return 25000;
}

double optionTwo(double netPrice, double copiesSold) {
    return .125 * (netPrice * copiesSold);
}

double optionThree(double netPrice, double copiesSold) {
    double fourteenPercent = 0;
    double tenPercent = 0;
    if (copiesSold >= 4000) {
        
        fourteenPercent = .14 * (netPrice * -(4000 - copiesSold)) + (.1 * netPrice * 4000);
        return fourteenPercent;
        
    }
    if (copiesSold < 4000) {
        tenPercent = .1 * (netPrice * copiesSold);
        return tenPercent;
        
    }
    
}

int main()
{
    //variables 
    int copiesSold = 0; 
    double netPrice = 0;

    //welcome message 
    cout << "Custom Deal Options for Novel\n\n";
    //prompt user for net price of each copy
    cout << "Enter the net price of each copy of the novel:\n";
    cin >> netPrice;

    cout << "\n";

    
    //prompt user for estimated number of copies sold
    cout << "Enter the estimated number of copies sold:\n";
    cin >> copiesSold;

    cout << "\n";

    //call each function to calculate 
    

    optionOne(netPrice, copiesSold);
    optionTwo(netPrice, copiesSold);
    optionThree(netPrice, copiesSold);

    //mention royalties 
    
    cout << "The royalties under each option are:\n\n"
        << "Option One: $" << fixed << setprecision(2) << optionOne(netPrice, copiesSold) << "\n\n"
        << "Option Two:  $" << fixed << setprecision(2) << optionTwo(netPrice, copiesSold) << "\n\n"
        << "Option Three: $" << fixed << setprecision(2) << optionThree(netPrice, copiesSold) << "\n\n";

    //logic to figure out which option is best
    
    if (optionOne(netPrice, copiesSold) > optionTwo(netPrice, copiesSold) && optionOne(netPrice, copiesSold) > optionThree(netPrice, copiesSold)) {

        cout << "The best option is Option One.";
    }
    else if (optionTwo(netPrice, copiesSold) > optionOne(netPrice, copiesSold) && optionTwo(netPrice, copiesSold) > optionThree(netPrice, copiesSold)) {
        cout << "The best option is Option Two.";
    }
    else  {
        cout << "The best option is Option Three.";
    }
    
    
}   


