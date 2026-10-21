#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <int> indices;
    vector <string> words;

    words ={"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for(int i = 0; i < words.size(); i++)
    {
        if(words[i].at(0) == 'B')
            indices.push_back(i);
    }

    for(int index : indices)
    {
        cout << words[index] << " ";
    }

    cout << endl;
    
    return 0;
}
