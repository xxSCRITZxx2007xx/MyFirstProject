#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void numOfVowels(string check)
{
    int vowelNum = 0;

    vector <char> vowels;
    vowels = {'A','E','I','O','U','a','e','i','o','u'};

    for(int i = 0; i < check.size(); i++)
    {
        for(int j = 0; j < vowels.size(); j++)
        {
            if(check.at(i) == ' ')
            {
                continue;
            }

            if(check.at(i) == vowels[j])
            {
                vowelNum++;
                break;
            }
        }
    }

    cout << "There are (" << vowelNum<< ") vowels in the string"<< endl;
}

void Reverse(string token)
{
    string builder = "";

    for( int i = 0; i < token.size(); i++)
    {
        builder.append(string(1 , token.at(token.size() - i -1)));
    }

    cout << "The Reversed String is\n" << builder << endl;
}

void CAPsecond(string token)
{
    if(token.at(1) > 96 && token.at(1) < 122)
    {
        token.at(1) = (token.at(1) - 32);
    }

   for(int index = 2; index < token.size()-2 ;index++)
   {
     if(token.at(index) == ' ')
     {
        if(token.at(index + 2 ) > 96 && token.at(index + 2) < 122)
        {
            token.at(index + 2) = (token.at(index + 2) - 32);
        }
     }
   }

   cout << "The second letter Capitalized is:\n" << token << endl;
}

int main()
{
     ifstream input("Textfile.txt");
     string fileData;
     getline(input , fileData);

     input.close();

     numOfVowels(fileData);

     Reverse(fileData);

     CAPsecond(fileData);

     return 0;
}
