#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    # Check if that index exists
    if idx < 0:
        return(my_list)

    elementcount = len(my_list) - 1
    if elementcount < idx:
        return(my_list)

    # That index definitely exists, modify the data
    else:
        my_list[idx] = element
        return(my_list)
