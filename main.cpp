#include <iostream>
#include <ctime>

const int ARRAY_SIZE = 5000;

void arrayStatic();
void arrayStack();
void arrayDyanmic();

int main() {
 std::clock_t start, end;
 start = std::clock();
 arrayStatic();
 end = std::clock();
 std::cout << end << " ";

 start = std::clock();
 arrayStack();
 end = std::clock();
 std::cout << end << " ";

 start = std::clock();
 arrayDyanmic();
 end = std::clock();
 std::cout << end;
}

void arrayStatic(){
  clock_t st;
  static int arr[ARRAY_SIZE];
  //init array
}

void arrayStack(){
  int arr[ARRAY_SIZE];
   //init array
}

void arrayDyanmic(){
  int* arr = new int[ARRAY_SIZE];
   //init array
}