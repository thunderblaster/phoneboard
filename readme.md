     "layout": [
        {"matrix": [0, 0], "x": 0, "y": 0}, // 1
        {"matrix": [0, 1], "x": 1, "y": 0}, // 2
        {"matrix": [0, 3], "x": 2, "y": 0}, // 3

        {"matrix": [1, 0], "x": 0, "y": 1}, // 4
        {"matrix": [1, 1], "x": 1, "y": 1}, // 5
        {"matrix": [1, 3], "x": 2, "y": 1}, // 6

        {"matrix": [2, 0], "x": 0, "y": 2}, // 7
        {"matrix": [2, 2], "x": 2, "y": 2}, // 8
        {"matrix": [2, 3], "x": 3, "y": 2}, // 9

        {"matrix": [3, 0], "x": 0, "y": 3}, // *
        {"matrix": [3, 2], "x": 2, "y": 3}, // 0
        {"matrix": [3, 3], "x": 3, "y": 3}, // #

        {"matrix": [4, 4], "x": 2, "y": 4} // flash/lightning


NOTE: most of this is a normal grid, but 8 and 0 are on their own column (ribbon pin 4 wired to arduino #3/qmk D0) separate from 2 and 5 (ribbon pin 8 wired to arduino RX1/qmk D2).
The lightning button isn't in a matrix, but has dedicated wires to it, but I am treating that as a column of one and row of one to make keymapping easier.

