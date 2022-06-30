from array import *
def binary_search(arr, x):
	low = 0
	high = len(arr) - 1
	mid = 0

	while low <= high:

		mid = (high + low) // 2

		# If x is greater, ignore left half
		if arr[mid] < x:
			low = mid + 1

		# If x is smaller, ignore right half
		elif arr[mid] > x:
			high = mid - 1

		# means x is present at mid
		else:
			return mid

	# If we reach here, then the element was not present
	return -1


# Test array
#arr = [ 2, 3, 4, 10, 40 ]
#x = 10
arr=array('i',[])
n=int(input("Enter the length of the array"))
for i in range(n):
    z=int(input("Enter the value"))
    arr.append(z)
x=int(input("Enter the number to be searched"))
# Function call
result = binary_search(arr, x)



if result != -1:
	print(f"{x} Element is present at index", str(result+1))
else:
	print("Element is not present in array")
