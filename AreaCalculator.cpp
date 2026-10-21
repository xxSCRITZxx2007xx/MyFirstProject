#include <iostream>

using namespace std;

void Arectangle()
{
    cout << "Input Length: ";
    double L;
    cin >> L;

    cout << "\nInput Width: ";
    double W;
    cin >> W;

    cout << "The Area is:  "<<L * W <<endl;
}

void Acircle ()
{
    cout << "Input Radius: ";
    double radius;
    cin >> radius;

    cout << "The Area is: " << 2 * (22.0/7.0) * radius * radius<<endl;
}

void Atriangle()
{
    cout << "Input Base: ";
    double B;
    cin >> B;

    cout <<"\nInput Height: ";
    double H;
    cin >> H;

    cout << "The Area is: "<<  0.5 * B * H <<endl;
}

void Asquare()
{
    cout << "Input Side Length: ";
    double S;
    cin >> S;

    cout << "The Area is: "<< S * S << endl;
}

int main()
{

  while(true)
  {
    cout << "Please select a shape whose area is to be calculated" <<endl;
    cout << "\t1. Square" << endl;
    cout << "\t2. Rectangle" << endl;
    cout << "\t3. Circle" << endl;
    cout << "\t4. Triangle" << endl;
    cout << "\t5. To Exit Program" << endl;

    short choice;
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            Asquare();
            break;
        }

        case 2:
        {
            Arectangle();
            break;
        }

        case 3:
        {
            Acircle();
            break;
        }

        case 4:
        {
            Atriangle();
            break;
        }

        case 5:
        {
            cout << "Thank you using SysAreaCalc :) " <<endl;
            exit(0);
        }

        default:
        {
            cout << "Your input was: " << choice << " which is an invalid input"<<endl;
            cout << "Please Enter a Valid Input" << endl;
            continue;
        }

    }
 }
 return 0;
}
