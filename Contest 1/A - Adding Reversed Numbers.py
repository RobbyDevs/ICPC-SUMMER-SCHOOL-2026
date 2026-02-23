def solve():
    ta,tb = input().split()
    
    a = int(ta[::-1])
    b = int(tb[::-1])
    
    ans = str(a+b)[::-1]
    print(int(ans))

for i in range(int(input())):
    solve()