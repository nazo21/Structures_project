


def sum_recur(n):
    if n > 0:
        return n + sum_recur(n - 1)
    else: 
       return 0   

def ref_counter():  
    m = 29
    y = m
    #y +=1 if uncommented the ref count won't refer to the same obj
    if id(m) == id(y): 
       print("m and y refer to the same object") 
    else:
        print("It is not")

def add_sum(n):
    n += 1


if __name__ == "__main__":
    print(sum_recur(5))
    print(ref_counter())


    