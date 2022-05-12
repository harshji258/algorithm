import math

def BinarySearch(a1, n, key):
    print(f"sorted array is : {a1}")
    start = 0
    end = n-1
    while start <= end:
        mid = math.floor(start+end)//2
        if a[mid] == key:
            return 1
        elif a[mid] < key:
            start = mid+1
        elif a[mid] > key:
            end = mid-1
    return 0


n = int(input("Enter the size of array :"))

arr = []
print(f"Enter the {n} element in array")
for i in range(0, n):
    ele = int(input())
    arr.append(ele)

key = int(input("Enter the searching element "))
a = sorted(arr)
print(f"sorted array is : {a}")
# print("Element found in "+BinarySearch(arr,n,key)+ " index")

if(BinarySearch(a, n, key)==1):
    print("Element found")
else:
    print("Element not found")


