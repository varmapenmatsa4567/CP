n = int(input())
def call(s):
    if(len(s)>10):
        s = s.replace(s[1:-1],str(len(s)-2))
    print(s)
 
for i in range(n):
    call(input())
