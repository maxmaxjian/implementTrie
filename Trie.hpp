#ifndef Trie_hpp
#define Trie_hpp

#include <queue>

#include "TrieNode.hpp"

using namespace std;

using pNode = shared_ptr<TrieNode>;

class Trie{
public:
  Trie() {
    root = make_shared<TrieNode>();
  }

  // inserts a word into the trie
  void insert(const string & word) {
    queue<pNode> qu;
    qu.push(root);
    pNode found;
    while(!qu.empty()) {
      found = qu.front();
      qu.pop();
      if (word.find(found->getStr())!=string::npos && word.compare(found->getStr())!=0) {
	vector<pNode> vec = found->getNext();
	queue<pNode> temp;
	for (auto & p : vec) {
	  if (word.find(p->getStr())!=string::npos)
	    temp.push(p);
	}
	if (temp.empty())
	  break;
	else {
	  while (!temp.empty()) {
	    qu.push(temp.front());
	    temp.pop();
	  }
	}
      }
      else if (!word.compare(found->getStr()))
	return;
    }

    size_t len = found->getStr().length()+1;
    while (len <= word.length()) {
      pNode next = make_shared<TrieNode>(word.substr(0, len));
      found->add(next);
      found = next;
      len++;
    }
  }

  // returns if the word is in the trie
  bool search(const string & word) {

    return true;
  }

  // return if there is any word in the trie
  // that starts with the given prefix
  bool startWith(const string & prefix) {

    return true;
  }

  void print() {
    queue<pNode> qu;
    qu.push(root);
    while (!qu.empty()) {
      pNode curr = qu.front();
      qu.pop();
      curr->printStr();
      cout << "\n";
      for (auto & p : curr->getNext())
	qu.push(p);
    }
  }

private:
  pNode root;
};

#endif
