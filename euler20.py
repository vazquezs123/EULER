#!/usr/bin/env python
import math

# parse n! to add digits; returns list of digits
def getDigits(n):
	digitList = []
	print n
	while n:
		digitList.append(n % 10)
		n = n / 10
	return digitList

def addDigits(n):
	sum = 0
	for digit in n:
		sum = sum + digit
	return sum
	
n = 100				# n
nFac = math.factorial(n)	# n!	
nFacDigits = getDigits(nFac)
nFacSum = addDigits(nFacDigits)


print "n: %d\nn!: %d\nsum: %d" % (n, nFac, nFacSum)

