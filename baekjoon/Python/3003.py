import re

def get_chess_count(param1):
    count_arr = [1, 1, 2, 2, 2, 8]

    for idx, val in enumerate(count_arr):
        param1[idx] = str(val - int(param1[idx]))

chess_arr = re.findall(r'\d+', input())

get_chess_count(chess_arr)

for i in chess_arr:
    print(i + ' ', end='')