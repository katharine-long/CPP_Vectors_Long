#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Input_Validation_Extended.h"

using namespace std;

int main() {

  vector<double> weightList;
  double weight = 0.0;
  double total = 0.0;
  double average = 0.0;
  double max;

  for (int i = 0; i < 5; ++i) 
  {
    cout << "Enter weight: " << endl;
    weight = validateDouble(weight);
    weightList.push_back(weight);
  }

  cout << "You Entered: ";

  for (int i = 0; i < weightList.size(); ++i)
  {
    cout << weightList[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < weightList.size(); ++i)
  {
    total += weightList[i];
  }
  cout << "\nTotal weight: " << total << endl;

  average = total / 5;

  cout << "Average weight: " << average << endl;

  cout << "Max weight: " << 
  *max_element(weightList.begin(), weightList.end()) << endl;

  return 0;  
} 