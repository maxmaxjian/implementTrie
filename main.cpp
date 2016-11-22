#include "Trie.hpp"

// #include <iostream>
// #include <string>
// #include <memory>
// #include <vector>
// #include <queue>

// using namespace std;

// class TrieNode {
// private:
//   string str;
//   vector<shared_ptr<TrieNode>> next;
  
// public:
//   TrieNode(const string & s = "") : str(s) { }

//   string getStr() {
//     return str;
//   }

//   vector<shared_ptr<TrieNode>> & getNext() {
//     return next;
//   }

//   void add(const shared_ptr<TrieNode> & node) {
//     next.push_back(node);
//   }

//   void printStr() {
//     if (!next.empty()) {
//       cout << "str = " << str;
//       cout << "\t -> ";
//       for (size_t i = 0; i < next.size(); i++) {
// 	cout << next[i]->getStr();
// 	if (i != next.size()-1)
// 	  cout << ", ";
//       }
//     }
//     else
//       cout << "str = " << str << "\t -> null";
//   }
// };

// using pNode = shared_ptr<TrieNode>;

// class Trie{
// public:
//   Trie() {
//     root = make_shared<TrieNode>();
//   }

//   // inserts a word into the trie
//   void insert(const string & word) {
//     queue<pNode> qu;
//     qu.push(root);
//     pNode found;
//     while(!qu.empty()) {
//       found = qu.front();
//       qu.pop();
//       if (word.find(found->getStr())!=string::npos && word.compare(found->getStr())!=0) {
// 	vector<pNode> vec = found->getNext();
// 	queue<pNode> temp;
// 	for (auto & p : vec) {
// 	  if (word.find(p->getStr())!=string::npos)
// 	    temp.push(p);
// 	}
// 	if (temp.empty())
// 	  break;
// 	else {
// 	  while (!temp.empty()) {
// 	    qu.push(temp.front());
// 	    temp.pop();
// 	  }
// 	}
//       }
//       else if (!word.compare(found->getStr()))
// 	return;
//     }

//     size_t len = found->getStr().length()+1;
//     while (len <= word.length()) {
//       auto next = make_shared<TrieNode>(word.substr(0, len));
//       found->add(next);
//       found = next;
//       len++;
//     }
//   }

//   // returns if the word is in the trie
//   bool search(const string & word) {

//     return true;
//   }

//   // return if there is any word in the trie
//   // that starts with the given prefix
//   bool startWith(const string & prefix) {

//     return true;
//   }

//   void print() {
//     queue<pNode> qu;
//     qu.push(root);
//     while (!qu.empty()) {
//       pNode curr = qu.front();
//       qu.pop();
//       curr->printStr();
//       cout << endl;
//       for (auto & p : curr->getNext())
// 	qu.push(p);
//     }
//   }

// private:
//   pNode root;
// };

int main() {
  Trie trie;
  trie.insert("tea");
  trie.insert("A");
  trie.insert("to");
  trie.insert("ted");
  trie.insert("ten");
  trie.insert("i");
  trie.insert("in");
  trie.insert("inn");
  trie.print();
}
