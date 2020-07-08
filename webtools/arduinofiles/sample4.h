#ifndef sample4_H_
#define sample4_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "src/MozziDK/src/mozzi_pgmspace.h"
 
#define sample4_NUM_CELLS 2870
#define sample4_SAMPLERATE 16384
 
CONSTTABLE_STORAGE(int8_t) sample4_DATA [] = {0, -1, 1, -1, 1, 0, 1, 3, 6, 5, 4,
3, 3, 3, -84, -127, -104, -78, -57, -55, -47, -50, -47, -41, -34, -31, -22, -16,
-8, -1, 6, 14, 20, 26, 32, 37, 41, 47, 50, 54, 55, 58, 59, 61, 59, 60, 58, 53,
53, 54, 51, 49, 47, 47, 46, 46, 45, 46, 45, 44, 45, 45, 44, 44, 43, 43, 43, 42,
42, 41, 41, 41, 41, 41, 40, 40, 40, 40, 36, 30, 32, 33, 34, 34, 35, 30, 23, 24,
26, 28, 28, 18, 17, 18, 22, 19, 11, 11, 13, 15, 8, 5, 8, 9, 3, 0, 4, 2, -5, -4,
-1, -4, -10, -7, -6, -13, -14, -10, -14, -19, -16, -16, -22, -22, -20, -24, -28,
-24, -26, -31, -31, -28, -31, -35, -33, -32, -38, -40, -35, -36, -42, -42, -38,
-40, -45, -46, -41, -41, -47, -50, -47, -44, -45, -52, -51, -48, -46, -44, -50,
-54, -52, -50, -47, -46, -46, -52, -55, -52, -50, -48, -48, -46, -46, -46, -46,
-46, -45, -45, -44, -45, -48, -49, -47, -42, -39, -40, -40, -40, -40, -41, -40,
-41, -39, -40, -39, -39, -33, -29, -30, -33, -31, -23, -24, -23, -18, -17, -15,
-11, -10, -6, -4, 0, 2, 5, 8, 11, 14, 17, 19, 22, 24, 26, 29, 30, 33, 35, 37,
39, 39, 42, 42, 43, 45, 44, 48, 47, 46, 49, 51, 49, 44, 47, 51, 51, 48, 46, 44,
44, 43, 48, 51, 51, 48, 47, 45, 45, 44, 45, 44, 43, 43, 44, 42, 42, 42, 41, 40,
36, 32, 32, 33, 36, 36, 36, 35, 35, 35, 30, 24, 25, 27, 27, 29, 27, 21, 18, 20,
22, 23, 18, 13, 14, 15, 16, 10, 9, 9, 12, 8, 4, 3, 6, 3, -1, 0, 1, -2, -6, -5,
-4, -7, -9, -9, -8, -12, -14, -12, -14, -18, -18, -16, -19, -22, -21, -20, -24,
-26, -24, -25, -29, -29, -27, -29, -32, -33, -30, -31, -35, -36, -35, -33, -36,
-39, -39, -36, -36, -41, -42, -41, -37, -37, -42, -45, -44, -42, -40, -38, -42,
-46, -47, -46, -42, -41, -39, -40, -40, -40, -44, -47, -47, -45, -43, -42, -40,
-41, -40, -39, -40, -40, -39, -38, -38, -38, -38, -37, -37, -36, -30, -28, -28,
-29, -30, -32, -31, -25, -21, -22, -23, -21, -17, -17, -15, -12, -10, -7, -5,
-4, -2, 1, 4, 6, 9, 11, 14, 15, 18, 20, 23, 24, 26, 28, 30, 31, 33, 35, 36, 37,
38, 38, 40, 42, 40, 41, 43, 43, 41, 43, 46, 45, 43, 41, 39, 43, 46, 47, 46, 44,
42, 40, 41, 40, 40, 39, 39, 39, 38, 38, 38, 38, 38, 37, 37, 36, 36, 36, 36, 36,
35, 35, 34, 29, 25, 25, 27, 28, 29, 29, 29, 25, 21, 20, 20, 23, 24, 21, 16, 15,
16, 17, 16, 12, 9, 10, 12, 11, 7, 6, 6, 7, 4, 2, 2, 3, -1, -3, -3, -2, -5, -6,
-6, -6, -9, -10, -10, -10, -13, -14, -14, -14, -16, -18, -17, -17, -20, -22,
-21, -21, -23, -25, -24, -24, -26, -27, -27, -26, -28, -30, -31, -30, -29, -31,
-34, -33, -33, -31, -33, -36, -37, -36, -34, -33, -34, -38, -38, -38, -37, -35,
-34, -33, -36, -39, -40, -40, -38, -37, -36, -35, -35, -35, -34, -35, -34, -33,
-33, -33, -33, -32, -33, -32, -31, -31, -31, -31, -31, -31, -31, -31, -30, -28,
-23, -21, -22, -22, -23, -21, -17, -16, -16, -14, -12, -11, -9, -7, -6, -2, -1,
2, 3, 4, 6, 9, 11, 12, 15, 16, 18, 21, 22, 23, 25, 26, 28, 29, 31, 31, 32, 34,
34, 34, 36, 36, 37, 37, 38, 39, 38, 37, 38, 40, 40, 40, 40, 38, 36, 35, 35, 35,
36, 39, 42, 41, 41, 39, 38, 37, 36, 37, 35, 36, 36, 35, 33, 29, 26, 27, 27, 29,
29, 29, 29, 30, 29, 30, 28, 25, 21, 20, 21, 21, 22, 23, 21, 17, 16, 16, 17, 16,
15, 12, 12, 11, 12, 11, 7, 8, 8, 7, 6, 3, 3, 3, 2, 1, -1, -1, -1, -4, -4, -5,
-6, -7, -9, -8, -9, -10, -11, -12, -11, -14, -15, -16, -14, -17, -18, -19, -18,
-18, -20, -22, -22, -22, -23, -24, -24, -24, -24, -26, -27, -28, -27, -26, -28,
-29, -30, -30, -28, -28, -31, -32, -32, -32, -31, -30, -30, -32, -34, -35, -34,
-32, -31, -32, -30, -31, -30, -30, -32, -35, -37, -35, -34, -33, -32, -31, -31,
-31, -30, -30, -30, -29, -30, -29, -29, -26, -23, -22, -22, -22, -23, -24, -25,
-23, -21, -19, -16, -16, -17, -15, -13, -12, -11, -9, -8, -6, -4, -3, -1, 1, 2,
4, 6, 8, 10, 10, 12, 14, 16, 17, 19, 20, 22, 22, 24, 25, 26, 28, 29, 29, 30, 31,
31, 31, 33, 33, 34, 33, 34, 35, 35, 34, 33, 33, 32, 34, 36, 37, 36, 35, 33, 34,
33, 33, 32, 32, 31, 32, 31, 31, 31, 30, 30, 30, 30, 29, 29, 29, 28, 29, 28, 29,
28, 26, 23, 21, 21, 21, 21, 22, 23, 23, 21, 19, 17, 16, 17, 17, 17, 15, 13, 12,
11, 12, 11, 10, 9, 8, 9, 7, 5, 4, 3, 5, 3, 2, 1, 0, 0, -1, -3, -2, -4, -4, -6,
-8, -7, -6, -8, -9, -10, -10, -11, -13, -13, -14, -13, -16, -17, -16, -17, -18,
-18, -19, -19, -20, -21, -21, -22, -22, -22, -23, -25, -24, -25, -24, -24, -25,
-27, -27, -27, -26, -25, -27, -28, -29, -29, -29, -28, -27, -26, -27, -29, -30,
-31, -30, -30, -29, -28, -28, -27, -28, -28, -27, -27, -27, -26, -25, -26, -25,
-25, -25, -24, -25, -25, -24, -25, -24, -24, -23, -24, -22, -21, -20, -17, -17,
-17, -17, -16, -16, -13, -12, -11, -10, -8, -8, -7, -5, -3, -2, -1, 1, 2, 4, 5,
7, 8, 9, 11, 13, 14, 15, 17, 17, 20, 20, 21, 22, 23, 24, 24, 26, 26, 27, 28, 28,
28, 29, 29, 30, 30, 30, 30, 31, 32, 32, 31, 30, 31, 29, 29, 29, 30, 31, 32, 33,
32, 32, 32, 31, 30, 30, 29, 28, 29, 28, 28, 28, 28, 27, 25, 23, 22, 22, 22, 21,
23, 22, 23, 22, 22, 22, 20, 18, 17, 16, 16, 16, 16, 17, 14, 13, 13, 12, 12, 11,
10, 9, 9, 8, 8, 7, 6, 5, 5, 3, 4, 2, 1, 1, 1, -1, -2, -3, -3, -3, -5, -6, -5,
-6, -8, -8, -9, -8, -9, -10, -12, -12, -12, -12, -14, -15, -15, -15, -16, -17,
-18, -18, -18, -18, -19, -19, -21, -20, -21, -21, -22, -23, -22, -21, -22, -22,
-24, -25, -24, -24, -23, -23, -24, -25, -26, -26, -26, -26, -25, -24, -24, -24,
-24, -23, -25, -26, -27, -27, -27, -26, -26, -25, -24, -24, -24, -24, -23, -24,
-23, -23, -23, -23, -23, -22, -21, -20, -18, -17, -17, -16, -17, -17, -17, -15,
-14, -13, -13, -13, -11, -10, -9, -8, -7, -6, -4, -3, -3, -2, 0, 1, 2, 4, 5, 6,
6, 9, 9, 11, 12, 12, 13, 15, 16, 18, 18, 19, 19, 20, 21, 22, 23, 22, 23, 24, 24,
24, 24, 26, 25, 25, 25, 25, 25, 25, 26, 27, 27, 26, 25, 25, 25, 24, 24, 24, 23,
23, 23, 24, 22, 22, 22, 22, 21, 22, 21, 22, 21, 21, 21, 21, 21, 20, 21, 21, 20,
20, 18, 18, 16, 15, 16, 16, 15, 15, 14, 15, 13, 12, 11, 11, 10, 11, 10, 9, 8, 8,
7, 7, 7, 5, 5, 5, 4, 3, 3, 2, 1, 2, 0, 0, -1, -1, -3, -3, -3, -3, -4, -5, -5,
-6, -6, -7, -7, -8, -8, -9, -9, -10, -11, -12, -12, -12, -12, -12, -14, -14,
-14, -14, -14, -15, -16, -16, -16, -17, -16, -17, -18, -18, -18, -17, -18, -19,
-19, -20, -20, -20, -19, -20, -19, -20, -20, -21, -21, -21, -21, -21, -20, -20,
-20, -19, -19, -19, -19, -18, -18, -18, -17, -18, -18, -17, -17, -18, -17, -17,
-17, -16, -16, -16, -16, -16, -16, -15, -15, -15, -15, -14, -13, -12, -12, -11,
-11, -10, -9, -9, -7, -7, -6, -6, -5, -4, -3, -2, -1, 0, 0, 2, 3, 4, 4, 6, 6, 7,
8, 9, 9, 11, 11, 12, 13, 13, 14, 15, 15, 16, 17, 17, 16, 18, 19, 18, 19, 19, 19,
20, 20, 20, 21, 20, 20, 20, 20, 19, 21, 21, 21, 22, 21, 20, 20, 20, 20, 20, 19,
19, 19, 18, 19, 19, 18, 17, 18, 18, 17, 18, 17, 16, 17, 16, 16, 14, 13, 13, 13,
13, 13, 13, 13, 12, 12, 11, 11, 10, 9, 10, 10, 9, 8, 8, 7, 7, 7, 6, 5, 6, 4, 4,
4, 3, 3, 2, 2, 2, 1, 0, 0, -1, -1, -2, -1, -2, -4, -3, -3, -3, -4, -5, -5, -6,
-6, -6, -7, -7, -8, -8, -9, -9, -10, -10, -10, -11, -11, -11, -11, -11, -11,
-12, -13, -12, -13, -12, -14, -13, -14, -14, -15, -15, -15, -15, -15, -14, -16,
-16, -16, -16, -15, -15, -15, -16, -15, -17, -17, -16, -16, -16, -17, -17, -16,
-16, -16, -15, -16, -16, -15, -14, -14, -14, -14, -14, -15, -14, -14, -14, -14,
-13, -14, -13, -12, -12, -12, -11, -10, -11, -10, -10, -10, -9, -9, -8, -8, -7,
-7, -6, -5, -4, -4, -3, -3, -3, -1, 0, 0, 0, 1, 2, 2, 4, 4, 5, 6, 6, 8, 7, 8, 9,
10, 9, 11, 11, 12, 12, 12, 13, 12, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 16,
15, 16, 15, 15, 16, 15, 15, 16, 14, 15, 15, 15, 15, 16, 16, 16, 15, 15, 16, 16,
15, 15, 14, 14, 14, 13, 12, 12, 11, 12, 12, 10, 12, 12, 12, 11, 12, 11, 11, 10,
9, 8, 8, 8, 9, 8, 8, 8, 7, 6, 6, 5, 6, 5, 5, 5, 4, 3, 4, 3, 2, 2, 2, 2, 2, 1, 0,
1, 0, 0, -1, -1, -1, -2, -2, -3, -3, -4, -5, -5, -4, -4, -5, -5, -6, -6, -7, -7,
-7, -8, -7, -8, -9, -9, -8, -8, -8, -8, -9, -10, -10, -10, -10, -11, -10, -10,
-11, -11, -12, -11, -11, -11, -12, -11, -12, -12, -13, -13, -12, -13, -12, -12,
-12, -12, -12, -12, -12, -13, -13, -12, -12, -13, -12, -13, -13, -12, -13, -13,
-12, -12, -11, -12, -12, -11, -11, -11, -11, -9, -10, -10, -9, -9, -9, -8, -9,
-8, -9, -8, -8, -8, -6, -5, -6, -5, -5, -4, -4, -4, -3, -2, -2, -1, -1, 0, 1, 1,
1, 2, 2, 3, 3, 3, 4, 5, 5, 6, 5, 7, 6, 7, 8, 9, 9, 9, 9, 10, 10, 11, 10, 10, 11,
12, 11, 11, 11, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 11, 11, 12, 11, 11, 11,
11, 10, 10, 11, 10, 11, 10, 10, 10, 10, 10, 9, 10, 10, 9, 10, 10, 10, 10, 9, 10,
9, 9, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 7, 5, 5, 5, 5, 5, 4, 5, 4, 4, 4, 3, 3, 2, 2,
2, 1, 0, 1, 0, 0, 1, 0, -1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -3, -2, -4, -3,
-4, -5, -5, -4, -5, -5, -5, -5, -6, -6, -6, -6, -7, -6, -7, -6, -8, -8, -8, -8,
-7, -8, -7, -8, -8, -8, -8, -9, -8, -9, -9, -9, -9, -10, -9, -10, -10, -10, -9,
-9, -10, -9, -9, -8, -9, -9, -8, -9, -8, -9, -8, -8, -8, -8, -8, -7, -8, -8, -7,
-7, -7, -7, -7, -7, -7, -7, -6, -7, -7, -6, -7, -6, -7, -6, -6, -5, -4, -5, -5,
-5, -4, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 1, 0, 1, 1, 2, 2, 3, 3,
3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6, 7, 8, 7, 7, 8, 7, 8, 8, 9, 8, 8, 8, 8, 9, 8,
8, 8, 8, 9, 8, 9, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 8, 8, 8, 7, 7, 8, 7,
8, 7, 7, 7, 6, 6, 6, 5, 6, 6, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 4, 3, 3, 2, 2,
3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -2,
-1, -2, -3, -3, -4, -3, -4, -4, -4, -5, -4, -4, -4, -4, -5, -5, -5, -4, -4, -4,
-5, -6, -5, -6, -5, -5, -6, -5, -6, -6, -6, -6, -6, -6, -6, -5, -6, -6, -6, -6,
-6, -7, -7, -6, -6, -7, -7, -7, -6, -7, -7, -6, -6, -7, -6, -5, -6, -6, -6, -5,
-6, -6, -6, -6, -5, -6, -6, -5, -5, -5, -5, -6, -5, -4, -4, -4, -5, -5, -5, -4,
-4, -3, -4, -3, -3, -3, -2, -2, -1, -2, -2, -1, -1, -1, 0, 0, -1, 0, 1, 1, 1, 1,
2, 2, 2, 2, 3, 3, 2, 3, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 6, 5, 6, 5, 6, 6, 6, 6,
5, 6, 6, 5, 6, 5, 6, 5, 5, 6, 6, 7, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5,
5, 5, 5, 4, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2,
3, 3, 2, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, -2, -1,
-1, -1, -1, -1, -1, -2, -2, -2, -1, -2, -2, -2, -3, -3, -3, -3, -2, -3, -3, -3,
-4, -4, -3, -3, -4, -4, -4, -4, -4, -4, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -5, -4, -3, -4, -4, -4, -4, -4, -4, -4, -5, -4, -4, -4, -4, -4,
-4, -4, -4, -3, -4, -3, -3, -4, -4, -4, -3, -3, -3, -4, -3, -2, -2, -3, -2, -2,
-3, -2, -3, -3, -2, -3, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0,
0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 3, 3, 3, 3, 3, 2,
3, 3, 4, 4, 2, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 3, 3, 4, 3,
3, 2, 3, 3, 2, 3, 3, 3, 2, 3, 2, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 3, 2, 1, 2, 2, 2,
1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, -1, 0,
-1, -1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -2, -1, -1, -1, -2, -2,
-1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -2, -2, -2, -3, -1, -2, -2, -3,
-2, -2, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -2, -2, -1, -3, -2, -2, -2,
-2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -1, -2, -3, -2, -2, -1, -1, -2, -1, -2,
-1, -1, -2, -1, 0, -1, -1, -1, -1, 0, -1, -1, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1,
0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1,
1, 0, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2,
2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2, 1, 1, 0, 1, 1, 1, 0,
1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0,
-1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, 0, -1, 0, 0, -1, 0, 0, -1, 0,
0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 1, 0, };

#endif /* sample4_H_ */