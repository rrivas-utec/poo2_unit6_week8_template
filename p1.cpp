//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include "p1.h"
#include "heap_sort.h"

using namespace std;

void pregunta_1_case_1() {
    vector<int> vec{ 10, 4, 1, 32, 5, 7, 11 };
    // Caso de uso #1
    heap_sort hs;
    auto r1 = hs.get(vec);
    for (const auto& item : r1)
        cout << item << " ";
    cout << endl;
    // Caso de uso #2
    auto r2 = hs.get<list>({ 20, 30 ,40 , 50, 100, 2, 2 });
    for (const auto& item : r2)
        cout << item << " ";
    cout << endl;
    // Caso de uso #3
    auto r3 = hs.get<deque, greater>({ 20, 30 ,40 , 50, 100, 2, 2 });
    for (const auto& item : r3)
        cout << item << " ";
    cout << endl;
}

void pregunta_1_case_2() {
    vector<int> vec;
    copy(   istream_iterator<int>(cin), 
            istream_iterator<int>(), 
            back_inserter(vec));

    // Caso de uso
    heap_sort hs;
    auto r1 = hs.get(vec);
    for (const auto& item : r1)
        cout << item << " ";
    cout << endl;
}
