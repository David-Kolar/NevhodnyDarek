#include <iostream>
#include <list>
using namespace std;

int bruteForce(int num, int r, int s)  {
     list<int> posloupnost, nova;
     r--;
     s--;
     posloupnost.push_front(num);
     bool cont = true;
     while(cont){
         cont = false;
         for (int n : posloupnost) {
             if (n > 1) {
                 cont = true;
                 nova.push_front(n/2);
                 nova.push_front(n%2);
                 nova.push_front(n/2);
             }
             else{
                 nova.push_front(n);
             }
         }
         posloupnost = nova;
         nova.resize(0);
     }
     for (int val : posloupnost)
        cout << val << " ";
     cout << endl;
     int counter = 0;
     for (int i = 0; i < posloupnost.size(); i++) {
         if (r <= i and i <= s) counter += posloupnost.back();
         posloupnost.pop_back();
     }
     return counter;
}
int binarySearchSolution(int n, int r, int s) {

}
int celkovaDelka(int n) {
    int delka = 1;
    int pocetProstredku = 0;
    while(n > 1) {
        pocetProstredku += delka;
        delka *= 2;
        n /= 2;
    }
    return delka + pocetProstredku;
}
int prefix(int n, int delkaPrefixu) {
    int delka = celkovaDelka(n);
    while (true) {

    }
    return 0;
}
int main() {
    int n = 11;
    int r = 2;
    int s = 6;
    cout << bruteForce(n, r, s) << endl;
    cout << celkovaDelka(n);
    return 0;
}
