#ifndef TrieNode_hpp
#define TrieNode_hpp

#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class TrieNode {
private:
  string str;
  vector<shared_ptr<TrieNode>> next;
  
public:
  TrieNode(const string & s = "") : str(s) { }

  string getStr() {
    return str;
  }

  vector<shared_ptr<TrieNode>> & getNext() {
    return next;
  }

  void add(const shared_ptr<TrieNode> & node) {
    next.push_back(node);
  }

  void printStr() {
    cout << "str = " << str;
    if (!next.empty()) {
      cout << "\t -> ";
      for (size_t i = 0; i < next.size(); i++) {
	cout << next[i]->getStr();
	if (i != next.size()-1)
	  cout << ", ";
      }
    }
    else
      cout << "\t -> null";
  }
};

#endif
