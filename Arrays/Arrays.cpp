#include<array>
#include<algorithm>
#include <iostream>
using namespace std;


int main()
{
    array<int, 8> arr{ 1,8,5,7,15,7,8,8};
    array<int, 8> arr3{ 1,9,5,7,15,7,8,8 };
    /*for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << '\t';
    }
    cout << endl;*/

    for_each(arr.rbegin(), arr.rend(), [arr](int a) {  cout << a << '\t'; });
    cout << endl;
   // sort(arr.begin(), arr.end());
   // reverse(arr.begin(), arr.end());
    for_each(arr.begin(), arr.end(), [arr](int a) {  cout << a << '\t'; });
    cout << endl;
    for(const int& item:arr)
    {
        cout << item << '\t';
    }
    cout << endl; 
    std::array<std::string, 2> a3 = { std::string("E"), "\u018E" };
    for (const auto& s : a3)
        std::cout << s << ' ';
    cout << endl;
    array<array<int, 3>, 3> arr2 = { {1,2,3, 4,5,6,7,8,9 } };
    auto a = find(arr.begin(), arr.end(), 10);
    if (a != arr.end())
        cout << "10 найдено\n";
    else
        cout << "10 не найдено\n";
    cout << count(arr.begin(), arr.end(), 8) <<endl;
    auto b = count_if(arr.begin(), arr.end(), [arr](int a) {return a%2 == 0; });
    cout << b << endl;
    auto c = mismatch(arr.begin(), arr.end(), arr3.begin());
    for_each(arr3.begin(), arr3.end(), [arr3](int a) {  cout << a << '\t'; });
    cout << endl;
    cout << *c.first << "\t" <<*c.second << endl;





    

}

