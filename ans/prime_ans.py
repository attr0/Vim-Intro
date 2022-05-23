def isPrime(x):
    st   = 2
    ed = x**.5
    for i in range(st, int(ed)):
        if x%i == 0:
            return False
    return True

def main():
    for num in range(10, 1001):
        if isPrime(num):
            print(num)

if __name__ == '__main__':
    main()

