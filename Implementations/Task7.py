# File name: tme.py
# Created by Norman Matloff.
#
# reads in the text file whose name is specified on the command line,
# and reports the number of lines and words

import sys
import csv

def Avg(data):
    length = len(data)
    total = 0
    for i in range(length):
        total += data[i]
    avgValue = total/length
    return avgValue

def Max(data):
    length = len(data)
    maxValue = 0
    for i in range(length):
        if maxValue < data[i]:
            maxValue = data[i]
    return maxValue

def Min(data):
    length = len(data)
    minValue = 100 
    for i in range(length):
        if minValue > data[i]:
            minValue = data[i]
    return minValue


infile = open(sys.argv[1])
reader = csv.reader(infile)
headings = []
heading = next(reader)
Data = []

for line in reader:
    Data.append(float(line[1]))

print (Avg(Data))
print(Max(Data))
print(Min(Data))
