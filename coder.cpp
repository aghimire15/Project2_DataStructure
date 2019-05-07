#include<iostream>
#include<fstream>
#include "coder.h"

Coder::Coder()
{
    root = new node;
    root->data = ' ';
}

void Coder::makeTree()
{
    map<char, string>::iterator it;
    nodePtr currNode;
    for(it = codeLetters.begin(); it != codeLetters.end(); it++)
    {
        currNode = root;
        string code = it->second;
        for(int i = 0; i < code.length(); i++)
        {
            if (code[i] == '.')
            {
                if(currNode->left = nullptr)
                    currNode->left = new node;
                currNode = currNode->left;
            }
            else
            {
                if(currNode->right = nullptr)
                    currNode->right = new node;
                currNode = currNode->right;
            }
        }
        currNode->data = it->first;
    }
}

void Coder::buildMap(string fileName)
{
    char letter;
    string code;
    ifstream fin;
    fin.open(fileName);

    while(!fin.eof())
    {
        fin >> letter >> code;
        codeLetters.insert(pair(letter, code));
    }
    fin.close();
}

string Coder::decode(string message)
{
    nodePtr currNode = root;
    string result;
    for(int i = 0; i < message.length(); i++)
    {
        if(message[i] == '.')
            currNode = currNode->left;
        else if (message[i] == '-')
            currNode = currNode->right;
        else
        {
            result += currNode->data;
            currNode = root;
        }
    }
    return result;
}

string Coder::encode(string word)
{
    string result;
    for(int i = 0; i < word.length(); i++)
    {
        result += codeLetters.find(tolower(word[i]))->second;
        result += " ";
    }
    return result;
}