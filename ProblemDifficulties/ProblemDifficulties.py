tc = int(input())
for i in range(tc):
    a=list(map(int,input().split())) #taking input into a list
    t=set(a)                            #converting to set to remove redundant occurances
    if len(t)==4:
        print(2)
    elif len(t)==3:
        print(2)
    elif len(t)==2:
        b=a[0]
        if a.count(b)==2:
            print(2)
        else:
            print(1)
    else:
        print(0)