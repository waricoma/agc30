#include <iostream>

using namespace std;

int main() {
  int lakeDistance, treeCount, trees[] = {}, i, result;
  bool lr;
  cin >> lakeDistance >> treeCount;
  for (i = 0; i < treeCount; i++) cin >> trees[i];
  for (i = 0; i < treeCount; i++) {
    if (i == 0) {
      int add = lakeDistance - trees[treeCount - 1];
      lr = add >= trees[i];
      result = lr ? add : trees[i];
      continue;
    }
  }
}

/*
#include <iostream>

using namespace std;

int main() {
  int noPoison, deliciousNoPoison, deliciousPoison;
  cin >> noPoison >> deliciousNoPoison >> deliciousPoison;

  int deliciousAll = deliciousNoPoison + deliciousPoison;
  int noPoisonAll = noPoison + deliciousNoPoison;
  if (noPoisonAll >= deliciousPoison) {
    cout << deliciousAll << endl;
  } else {
    int result = 0;
    int deliciousPoisonCount = deliciousPoison;
    for (int i = 0; i < deliciousNoPoison; i++) {
      if (deliciousPoisonCount == 0) break;
      deliciousPoisonCount--;
      result += 2;
    }
    for (int i = 0; i < noPoison; i++) {
      if (deliciousPoisonCount == 0) break;
      deliciousPoisonCount--;
      result++;
    }
    if (deliciousPoisonCount != 0) result++;
    cout << result << endl;
  }
}
*/
