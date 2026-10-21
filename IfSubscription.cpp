#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomGen()
{
    srand(time(0));
    
    int randomNum = rand()%12;
    
    return randomNum;
}

int main()
{
    int DaysUntilExpiration = randomGen();
    
    if(DaysUntilExpiration > 10)
    {
        cout << "You have an acitve subscription" << endl;
    }
    
    else if (DaysUntilExpiration > 5)
    {
        cout << "Your subscription will expire soon. Renew Now!"<< endl;
    }
    
    else if (DaysUntilExpiration > 1)
    {
        cout << "Your subscription will expire in " << DaysUntilExpiration<< " Days \n Renew Now and Save 10%!" << endl;
    }
    
    else if (DaysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day! \nRenew now and save 20%!" << endl;
    }
    
    else
    {
        cout << "Your subscription has expired!" << endl;
    }
    
    return 0;
}