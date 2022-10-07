#include <iostream>
#include <string>
#include <ctime>
#include <sstream>
#include <fstream>



using namespace std;


void password(const int &number, const int &leight) {
    std::ostringstream label;
    ofstream myfile;

    myfile.open("password.txt", ios::app);


    const char letters[] = "abcdefghijklnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!#$%&\()*+,-./:;<=>?@[\\]^_`{|}~";
    const int MAX_LEN = strlen(letters);
    srand(time(NULL)); 


    for (int i = 0; i < number; i++) {
        string word = "";
        
        for (int j = 0; j < leight; j++) {

            word += letters[rand() % MAX_LEN];
        }
        

        myfile << word + "\n";
    }
    myfile.close();

    


    label << "\n[INFO]: Generate password " << "\n[INFO]: num " << number << " leight " << leight << "\n[INFO]: save add to file --> 'password.txt' ";

    cout << label.str() << endl;

}




int main()
{
    int number = 0;
    int length = 0;

    cout << "Programm C++ Generate random password\n\n";

    cout << "input password cout: ";
    cin >> number;
    cout << "input password length: ";
    cin >> length;
    password(number, length);
    
}

