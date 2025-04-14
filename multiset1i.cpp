#include <iostream>
#include <set>
#include <map>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    srand(static_cast<unsigned>(time(0)));

    multiset<int> numbers;
    int numElements = 30;

    for (int i = 0; i < numElements; ++i) {
        int randomNumber = rand() % 21;
        numbers.insert(randomNumber);
    }

    cout << "Числа в multiset:\n";
    for (multiset<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    map<int, int> frequency;
    for (multiset<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        frequency[*it]++;
    }

    cout << "\nКількість повторень кожного елемента:\n";
    for (map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        cout << it->first << " зустрічається " << it->second << " раз(и)\n";
    }

    return 0;
}
