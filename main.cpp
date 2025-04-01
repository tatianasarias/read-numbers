#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cerr;
using std::ifstream;
using std::string;
using std::cin;

int main (int argc, const char * argy[]) {
    const int MAX=10;
    double array[MAX];

    string filename;
    cout <<"Please enter file name: ";
    cin >> filename;
    ifstream file(filename);
    int counter=0;
    double sum=0;

    if (file.is_open()) {
        while (file >> array[counter]) {
            counter++;
            if (counter ==MAX) {
                cout << "The array is full.";
                break;
            }
        }
        for (int i=0; i<counter; ++i) {
            sum +=array[i];
            cout << array[i] << '\t';
        }
        cout << endl;
        cout << "The average is: " << sum/counter << endl;
    }else {
        cerr<< "Error opening file " << filename << endl;
    }







    return 0;
}