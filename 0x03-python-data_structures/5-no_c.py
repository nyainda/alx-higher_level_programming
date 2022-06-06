#!/usr/bin/python3

def no_c(my_string):
    final_string = ""

    for chars in my_string:
        if chars == 'c' or chars == 'C':
            continue
        else:
            final_string = final_string + chars

    return final_string



