#include <cstdlib>
#include <iostream>
#include <cctype>

using namespace std;

void bin_packing(int n, int bin[], int binSize);

int main(int argc, char **argv) 
{
    int n; 
    int bin[n];
    int binSize;
    
    cout << "Enter the number of items in the set: ";
    cin >> n;
    cout << "Enter the items in the set (separated by spaces): ";
    for (int i = 0; i < n; i++)
    {
        cin >> bin[i];
    }
    cout << "Enter the size of the bin: ";
    cin >> binSize;
    bin_packing(n, bin, binSize);
    return 0;
}

void bin_packing(int n, int bin[], int binSize) 
{
    int binCount = 1;
    int tmpSize = binSize;
    for (int i = 0; i < n; i++) 
    {
        if (tmpSize - bin[i] + i > 0) 
        {
            tmpSize -= bin[i] + i;
            continue;
        } 
        else 
        {
            binCount++;
            tmpSize = binSize;
            i--;
        }
    }
    cout << "The number of bins required is " << binCount << endl;
}
