//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include "p2.h"
#include "binary_search.h"

using namespace std;

void pregunta_2_case_1() {
    vector<int> vec {1, 4, 5, 6, 11, 2, 3, 7};
    utec::binary_search<int> bs (vec);
    bs.bfs([](auto item){ cout << item << " "; });
    cout << endl;
    bs.dfs([](auto item){ cout << item << " "; });
    cout << endl;
    auto result = bs(4);
    if (result)
        cout << result->data << endl;
    bs.push(8);
    bs.bfs([](auto item){ cout << item << " "; });
    cout << endl;
}
