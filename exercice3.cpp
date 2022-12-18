#include <iostream>
#include <list>

using namespace std;

int main()
{
    list <int> firstlist; 
    list <int>::iterator it;
    int x;

    for (int i = 1; i <7; i++)
    {
        cout << "Veuillez entre le valeur " << i << " de la list:\n";
        cin >> x;
        firstlist.push_back(x);
    }
    
    firstlist.sort();  
    cout << "la liste triée.:\n";
    for(it=firstlist.begin();it!=firstlist.end();it++){
        cout << *it << endl;
    }
       return 0;
}