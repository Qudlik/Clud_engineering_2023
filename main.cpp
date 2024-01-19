#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //definng variables
    fstream loadset;
    string load_name;

    //appending s01 - s09
    for ( int i = 1; i<=9; i++){
        load_name = "Projekt.s0" + to_string(i);
        loadset.open (load_name, std::ios::app);

        if (loadset.good() == true){

        loadset << "/NOPR"<<endl;

        for(int j=1; j<=9; j++){
            loadset <<"CP,R5.0,     2       1,          "<<i<<",         ,100,"<<endl;
            j++;
        }

        loadset << "/GOPR"<<endl;

        }else{
        cout << "Blad otwierania pliku #"<<i<<endl;
        }
        loadset.close();

    }

}
