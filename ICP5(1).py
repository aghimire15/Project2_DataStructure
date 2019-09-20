import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
anomalies = []

train = pd.read_csv('train.csv')
train2 = train[train.GarageArea<1200]
sales_price = train2['SalePrice']
garage_area = train2['GarageArea']
plt.scatter(garage_area, sales_price, edgecolors='r')
plt.xlabel('Garage Area Field')
plt.ylabel('Sales Price')
#plt.title('House Prices')
plt.show()
