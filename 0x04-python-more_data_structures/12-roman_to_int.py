#!/usr/bin/python3
def roman_to_int(roman_string):
    if not roman_string:
        return 0

    roman_dict = {'M': 1000, 'D': 500, 'C': 100, 'L': 50, 'X': 10,\
                    'V': 5, 'I': 1}
    indexgen = (len(roman_string))
    tsum = 0
    elements = 0
    goodcount = 1
    
    for elements in range(indexgen):
        if roman_string[elements] in roman_dict:
            tsum = tsum + roman_dict.get(roman_string[elements])
            goodcount += 1

    if goodcount < indexgen:
        return 0

    return(tsum)
