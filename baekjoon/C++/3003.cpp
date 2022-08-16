#include <iostream>

using namespace std;

void get_chess_count(int* arr)
{
  int count_arr[6] = {1, 1, 2, 2, 2, 8};
  
  int i;
  for(i = 0; i < 6; i++)
  {
    arr[i] = count_arr[i] - arr[i];
  }
}

int main()
{
  int i, chess_arr[6];
  
  for(i = 0; i < 6; i++)
  {
    cin >> chess_arr[i];
  }
  
  get_chess_count(chess_arr);
  
  for(i = 0; i < 6; i++)
  {
    cout << chess_arr[i] << ' ';
  }
  
  return 0;
}
