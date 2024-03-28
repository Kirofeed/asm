#include <iostream>
using namespace std;

//extern "C" void __stdcall modifyArray1(int* arr, int size, int num);
//extern "C" void __cdecl modifyArray2(int* arr, int size, int num);
//extern "C" void __stdcall modifyArray3(int* arr, int size, int num);
//extern "C" void __cdecl modifyArray4(int* arr, int size, int num);
//extern "C" void __fastcall modifyArray5(int* arr, int num);
//
//void printmas(int* arr, const int& size) {
//    for (int i = 0; i < size + 1; ++i) {
//        cout << arr[i] << " ";
//    }
//    std::cout << std::endl;
//}
//
//void initmas(int* arr) {
//    arr[0] = 1;
//    arr[1] = 2;
//    arr[2] = 4;
//}
//
//int main() {
//    const int size_arr = 3;
//    int num;
//
//    int arr1[size_arr + 1];
//    int arr2[size_arr + 1];
//    int arr3[size_arr + 1];
//    int arr4[size_arr + 1];
//    int arr5[size_arr + 1];
//
//    initmas(arr1);
//    initmas(arr2);
//    initmas(arr3);
//    initmas(arr4);
//    initmas(arr5);
//
//    std::cout << "Unmodified array: { 1, 2, 4 }\ninsert number = 3" << std::endl;
//
//    num = 3;
//
//    modifyArray1(arr1, size_arr, num);
//    modifyArray2(arr2, size_arr, num);
//    modifyArray3(arr3, size_arr, num);
//    modifyArray4(arr4, size_arr, num);
//    modifyArray5(arr5, num);
//
//    cout << "Modified arrays:" << std::endl;
//
//    printmas(arr1, size_arr);
//    printmas(arr2, size_arr);
//    printmas(arr3, size_arr);
//    printmas(arr4, size_arr);
//    printmas(arr5, size_arr);


   /* return 0;
}*/


extern "C" int __stdcall modifyArray1(int* a, int sizee);
//extern "C" void __cdecl modifyArray2(int* arr, int size, int num);
//extern "C" void __stdcall modifyArray3(int* arr, int size, int num);
//extern "C" void __cdecl modifyArray4(int* arr, int size, int num);
//extern "C" void __fastcall modifyArray5(int* arr, int num);

int main() {
    const int sizee = 10;
    int a[sizee] = { 5, 4, 6, 5, 2, 4, 8, 3, 5, 1 };
    int count = 0;
    count = modifyArray1(a, sizee);
    cout << count << endl;
}
