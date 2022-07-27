#include <iostream>
using namespace std;



int getMaxPond(int* arr, int size);

int main() {
int array[] = {22,31,1,23};
int *arr1;
arr1 = array;

cout<<"{22,31,1,23} \noutput is ";

cout << getMaxPond(arr1, sizeof(array)/sizeof(array[0])) << endl;



return 0;

}


int getMaxPond(int* arr, int size) {

int left_value = arr[0];
int right_value = arr[size-1];

int amt = min(left_value, right_value) * (size - 1);

int left_Index = 0;
int right_Index = size - 1;


while(left_Index < right_Index) {

if(left_value <= right_value) {


left_Index++;

if(arr[left_Index] > left_value) {

    left_value = arr[left_Index];
    amt = max(amt, min(left_value, right_value) * (right_Index - left_Index));

}

} else if (left_value > right_value) {

right_Index--;


if(arr[right_Index] > right_value) {
    
    right_value = arr[right_Index];
    amt = max(amt, min(left_value, right_value) * (right_Index - left_Index));
        }
    }
}
return amt;
}

