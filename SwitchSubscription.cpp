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
    
    int choice ;
    
    if ( DaysUntilExpiration > 10)
        choice = 1;
    
    else if (DaysUntilExpiration > 5)
        choice = 2;
    
    else if (DaysUntilExpiration > 1)
        choice = 3;
    
    else if (DaysUntilExpiration == 1)
        choice = 4;
    
    else
        choice = 0;
        
        switch (choice)
        {
            case 1:
            {
                cout << "You Have An Active Subscription!"<<endl;
                break;
            }
            
            case 2:
            {
                cout << "Your Subscription Will Expire Soon. Renew Now!" << endl;
                break;
            }
            
            case 3:
            {
                cout << "Your Subscription Will Expire in "<<DaysUntilExpiration <<" Days\nRenew Now and save 10%!" << endl;
                break;
            }
            
            case 4:
            {
                cout << "Your Subscription Will Expire Within A Day!\nRenew Now And Save 20%!"<< endl;
                break;
            }
            
            case 0:
            {
                cout << "Your Subscription Has Expired!" << endl;
                break;
            }
            
            default:
                    cout << "Oops! Something Went Wrong." <<endl;
        }
        
    return 0;
}