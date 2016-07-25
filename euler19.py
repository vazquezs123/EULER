#!/usr/bin/env python

class Month(object):

    def __init__(self, month, days):
        """Return a month object with current month, and total days in month  """
        self.month = month

jan = Month('January', 31)
feb = Month('February', 28)
mar = Month('March', 31)
apr = Month('April', 30)
may = Month('May', 31)
jun = Month('June', 30)
jul = Month('July', 31)
aug = Month('August', 31)
sep = Month('September', 30)
otb = Month('October', 31)
nov = Month('November', 30)
dec = Month('December', 31)

monthList = []
monthList.append(jan)
monthList.append(feb)
monthList.append(mar)
monthList.append(apr)
monthList.append(may)
monthList.append(jun)
monthList.append(jul)
monthList.append(aug)
monthList.append(sep)
monthList.append(otb)
monthList.append(nov)
monthList.append(dec)

# initialize year
year = 1901

# initialize day of week list
dow = {0:'sunday',1:'monday',2:'tuesday',3:'wednesday',4:'thursday',5:'friday',6:'saturday'}

# initialize current dow key 
dowKey = 2 # initialize to 2 because jan 1, 1901 was a tuesday

# first sunday counter
sundayCounter = 0

while (year <= 2000):
	for month in monthList:

		# check if leap year for range of year
		daysInYear = 0
		if ((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)):
			daysInYear = 366
		else:
			daysInYear = 365

		for day in range(1, month.days):
			if dowKey == 0 and day == 1:
				sundayCounter = sundayCounter + 1
				print "%s, %s, %d, %y" % (dow[dowkey % 6]
			if dowKey == 6:
				dowKey = 0
			else:
				dowKey = dowKey + 1
	year = year + 1

print "The month is %s and it has %d days" % (jan.month, sundayCounter)







