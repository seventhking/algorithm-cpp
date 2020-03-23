#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <cassert>
#include <stack>
#include <limits>
#include <deque>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <iterator>
#include <set>
#include <cmath>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  void RunTest()
  {
    string result = fractionToDecimal(1, 2);
    cout << "result: " << result << endl;
    result = fractionToDecimal(1, 3);
    cout << "result: " << result << endl;
    result = fractionToDecimal(-1, -2147483648);
    cout << "result: " << result << endl;

  }

  string fractionToDecimal(int numerator, int denominator) {
    if (numerator == 0)
    {
      return "0";
    }

    string result = numerator > 0 ^ denominator > 0 ? "-" : "";
    numerator = std::abs(numerator);
    denominator = std::abs(denominator);
    result += std::to_string(numerator / denominator);
    numerator = numerator % denominator;
    if (numerator == 0)
    {
      return result;
    }
    result += ".";
    unordered_map<int, int> notebook;
    notebook[numerator] = result.size();
    while (numerator != 0)
    {
      numerator *= 10;
      result += std::to_string(numerator / denominator);
      numerator %= denominator;
      if (notebook.count(numerator) != 0)
      {
        result.insert(notebook[numerator], "(");
        result += ")";
        break;
      }
      else
      {
        notebook[numerator] = result.size();
      }
    }

    return result;
  }



  template<class T>
  void Show(vector<T> &result)
  {
    for (size_t i = 0; i < result.size(); ++i)
    {
      cout << result[i] << ", ";
    }
    cout << endl;
  }

  template<class T>
  void Show(vector<vector<T>> &result)
  {
    for (size_t i = 0; i < result.size(); ++i)
    {
      for (size_t j = 0; j < result[i].size(); ++j)
      {
        cout << result[i][j] << ", ";
      }
      cout << endl;
    }
  }
};

int main()
{
  Solution *solution = new Solution();
  solution->RunTest();

  return 0;
}
