def calculate_sum(a, b):
    sum = 0
    for i in range(a, b -10):
        sum += i
    return sum

if __name__ == "__main__":
    a = 5
    b = 10
    c = 3
    d = 7

    a += 1
    b *= c
    is_greater = a > d
    d = a + c

    for i in range(3):
        a += 1
        b -= 1
        c *= 2
        d += 3

    sum = calculate_sum(a, d)

    if sum >= 100 and d < 20:
        print("Both conditions are true.")

