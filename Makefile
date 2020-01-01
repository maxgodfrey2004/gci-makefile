# Copyright 2020 Max Godfrey
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

CC := g++
CFLAGS := -Wall -Wextra -Wpedantic -O2 -std=c++11

POINTS_OUTFILE_NAME := points.txt

all: points.txt

points.txt: points
	./points $(POINTS_OUTFILE_NAME)

points: main.cc points.o
	$(CC) $(CFLAGS) main.cc -o points points.o

points.o: points.cc points.h
	$(CC) $(CFLAGS) -c points.cc

.PHONY: clean

clean:
	rm *.o
	rm points
	rm points.txt
