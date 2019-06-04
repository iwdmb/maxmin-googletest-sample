# maxmin-googletest-sample
A simple googletest sample

# Linux Requirements

- g++
- make
- google/googletest (gtest)

# Install googletest

Please refer to the following link: 
[https://blog.alone.tw/2019/06/03/cpp-googletest-gtest-unit-test/](https://blog.alone.tw/2019/06/03/cpp-googletest-gtest-unit-test/)

# Use sample

```
~$ git clone https://github.com/iwdmb/maxmin-googletest-sample
~$ cd maxmin-googletest-sample
~$ make
g++ -isystem /usr/src/googletest/googletest//include -g -Wall -Wextra -pthread -c .//maxmin.cc
g++ -isystem /usr/src/googletest/googletest//include -g -Wall -Wextra -pthread -c .//maxmin_unittest.cc
g++ -isystem /usr/src/googletest/googletest//include -I/usr/src/googletest/googletest/ -g -Wall -Wextra -pthread -c \
            /usr/src/googletest/googletest//src/gtest-all.cc
g++ -isystem /usr/src/googletest/googletest//include -I/usr/src/googletest/googletest/ -g -Wall -Wextra -pthread -c \
            /usr/src/googletest/googletest//src/gtest_main.cc
ar rv gtest_main.a gtest-all.o gtest_main.o
ar: creating gtest_main.a
a - gtest-all.o
a - gtest_main.o
g++ -isystem /usr/src/googletest/googletest//include -g -Wall -Wextra -pthread -lpthread maxmin.o maxmin_unittest.o gtest_main.a -o maxmin_unittest
~$ ./maxmin_unittest
[==========] Running 6 tests from 2 test cases.
[----------] Global test environment set-up.
[----------] 3 tests from MaxTest
[ RUN      ] MaxTest.Positive
[       OK ] MaxTest.Positive (0 ms)
[ RUN      ] MaxTest.Zero
[       OK ] MaxTest.Zero (1 ms)
[ RUN      ] MaxTest.Negative
[       OK ] MaxTest.Negative (0 ms)
[----------] 3 tests from MaxTest (1 ms total)

[----------] 3 tests from MinTest
[ RUN      ] MinTest.Positive
[       OK ] MinTest.Positive (0 ms)
[ RUN      ] MinTest.Zero
[       OK ] MinTest.Zero (0 ms)
[ RUN      ] MinTest.Negative
[       OK ] MinTest.Negative (0 ms)
[----------] 3 tests from MinTest (0 ms total)

[----------] Global test environment tear-down
[==========] 6 tests from 2 test cases ran. (1 ms total)
[  PASSED  ] 6 tests.
```
