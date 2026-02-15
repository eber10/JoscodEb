#include <iostream>
#include <string>
using namespace std;
int main()
{
    string palabra;
    int contador = 0;
    cout << "Ingrese una palabra: ";
    getline(cin, palabra);

    for (char c : palabra)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            contador++;
        }
    }

    cout << "Cantidad de vocales:  " << contador << endl;
    return 0;
}
