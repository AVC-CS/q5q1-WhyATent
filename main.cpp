#include <iostream>
using namespace std;

int main()
{
    int n;
    char letter;
    // TODO: ask user for input
    cout << "Input 1 value to determine number iterations.\n";
    cin >> n;
    // TODO: outer loop for each row
    for(int i=0; i<n; i++){
        cout << endl;
        for(int j=0; j<i+1; j++){
            letter = 65+j;
            cout << letter << " ";
        }
    }
    cout << endl;
        // TODO: inner loop to print letters for this row

            // TODO: print the letter for this column

        // TODO: print newline after each row


    return 0;
}
