#include <iostream>
using namespace std;

int main()
{
    int n;
    char letter;
    // TODO: ask user for input
    cout << "Input 1 value to determine number of iterations." << endl;
    cin >> n;
    // TODO: outer loop for each row
    for(int i=0; i<n; i++){
        // TODO: inner loop to print letters for this row
        for(int j=0; j<i+1; j++){
            letter = 65+j;
            // TODO: print the letter for this column
            cout << letter;
            if (j<i){
                cout << " ";
            }
        }
        // TODO: print newline after each row
        cout << endl;
    }
    cout << endl;




    return 0;
}
