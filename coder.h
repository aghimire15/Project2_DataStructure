#ifndef _Coder
#define _Coder

#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<vector>

using namespace std;

struct node;
        typedef node* nodePtr;
        struct node
     {
          char data;
          nodePtr left, right;
      };
      nodePtr root;

class Coder{

    public:
        Coder();
        void makeTree();
        void buildMap(string fileName);
        string decode(string codedMessage);
        string encode(string word);
        map<char, string> codeLetters;
};

#endif