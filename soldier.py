import math
t = int(raw_input())
i=0
while(i<t):
		i+=1
		l = raw_input()
		m = long(l.split()[0])
		n = long(l.split()[1])
		if(m%2 == 1): p=m+1
		else : p = m
		if(n%2 == 1): q=n+1
		else : q = n
		if((p/2)*n > (q/2)*m):
		    print long((p/2)*n)
		else : print long((q/2)*m)
