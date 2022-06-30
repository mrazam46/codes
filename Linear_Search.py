from array import *
def search(arr, x):
    for i in range(len(arr)):

        if arr[i] == x:
            return i

    return -1
arr=array('i',[])
n=int(input("Enter the length of the array"))
for i in range(n):
    z=int(input("Enter the value"))
    arr.append(z)
x=int(input("Enter the number to be searched"))
# Function call
result = search(arr, x)



if result != -1:
	print(f"{x} Element is present at index", str(result+1))
else:
	print("Element is not present in array")
