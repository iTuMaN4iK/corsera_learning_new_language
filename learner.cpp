#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;

class Learner {
private:
  set<string> dict;

public:
  int Learn(const vector<string> &words) {
    int newWords = 0;
    for (const auto &word : words) {
      auto res = dict.insert(word);
      if (res.second) {
        newWords++;
      }
    }
    return newWords;
  }

  vector<string> KnownWords() const { return {dict.begin(), dict.end()}; }
};
