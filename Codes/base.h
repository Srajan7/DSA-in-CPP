#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void clear() { // clears output runcode
    system("cls");
}

int max(int a, int b, int c = INT32_MIN) {
    if(a>=b) return a>=c? a:c; 
    else return b>=c? b:c;
}

int sumOfFirstNNumbers(int n) {
    // int sum =0;for (int i = 0; i < n; i++) {
    //     sum+= i;
    // }
    // return sum;
    return n*(n+1)/2;
}

bool isAPythagoranTriplet(int a, int b, int c) {
    int hypotenuse, leg, body;
    hypotenuse = max(a, b, c);

    if(hypotenuse == a) {
        leg = b;
        body = c;
    }
    else if(hypotenuse == b) {
        leg = a;
        body = c;
    }
    else {
        body = b;
        leg = a;
    }
    if(hypotenuse*hypotenuse == leg*leg+ body*body) return true;
    else return false;
}

// enum hexa {A= 10, B, C, D, E, F};

double hexa2decimal(string n) {
    double sum = 0;
    for (int i = 0; i < n.length(); i++) {
        int index = n[n.length() -i -1];
        if(index > 64) {
            sum+= (index- 'A'+10)* pow(16, i);
            printf("Sum %.2f num %d\n", sum, index- 'A'+10);
        }
        else if(index <48) {
            sum+= (index-58)* pow(16, i);
            printf("Sum %.2f num %d\n", sum, index-58);
        }
    } 
    return sum;
} 

int decimal2octa(int n) {
    int j = 0, sum=0, count;
    while(n > pow(8, j+1)) j++; // printf("j is %d\n", j);
    count = j+1;
    for (int i = 0; i < count; i++) {
        sum = sum*10 + (int)(n/pow(8, j));
        // cout << "Sum: " << sum << endl;
        n %= (int)pow(8, j);
        j--;
        // cout <<"j is "<< j<< " n is :" <<n << endl;
    }
    // cout << "Sum is " << sum<< endl;
    return sum;
}

// long int decimal2binary(int n) {
//     long int ans =1;
//     int i= 0;
//     while(n != 0) {
//         ans = ans + (n%2)*pow(10, i);
//         cout << "Ans: " << ans << endl; 
//         n= (int)(n/2); cout << "n is " << n << endl;
//         i++;
//     }
//     return ans;
// }















































































































