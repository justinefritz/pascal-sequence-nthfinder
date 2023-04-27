nth = int(input("Enter the nth term: "))
x = 0
y = 1
for w in range(1, nth+1):
    if w < 3:
        next = x + y
        x = y
        y = next
    else:
        next = next * 2
print(next)