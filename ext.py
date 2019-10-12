import requests
from bs4 import BeautifulSoup
url="https://en.wikipedia.org/wiki/Google"
res=requests.get(url)
html=res.content
soup=BeautifulSoup(html,"html.parser")
text = soup.get_text()
f=open("input.txt",'w',encoding="utf-8")
f.write(text)
