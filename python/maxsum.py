def find_max(a, k):
    n = len(a)

    current_sum = 0
    maximum_sum = 0

    for i in range(0, k):
        current_sum += a[i]
    maximum_sum = current_sum

    for i in range(k, n):
        current_sum -= a[i-k]
        current_sum += a[i]
        if maximum_sum < current_sum:
            maximum_sum = current_sum
    return maximum_sum

a = [1, 5, 6, 8, 3, 9, 70]
k =2