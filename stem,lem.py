import nltk
from nltk.stem import PorterStemmer
from nltk.stem import WordNetLemmatizer
from nltk import wordpunct_tokenize, pos_tag, ne_chunk
WORDS = open('input.txt',encoding='utf-8').read()
wtokens=nltk.word_tokenize(WORDS)
for i in wtokens:
    print(i)
print(nltk.pos_tag(WORDS))
pStemmer=PorterStemmer()
print(pStemmer.stem(WORDS))
lm=WordNetLemmatizer()
print(lm.lemmatize(WORDS))
print(ne_chunk(pos_tag(wordpunct_tokenize(WORDS))))