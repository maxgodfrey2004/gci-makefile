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

"""Plots points defined in a provided file.
"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
import sys

import matplotlib.pyplot as pyplot

def plot_file(filename):
    """Plots the points defined in a provided file.

    Args:
      - filename: The name of the file in which the points are defined.
    """
    x_coords = []
    y_coords = []
    with open(filename) as fp:
        for line in fp.read().splitlines():
            x, y = map(int, line.split())
            x_coords.append(x)
            y_coords.append(y)
    pyplot.scatter(x_coords, y_coords)
    pyplot.show()

def main():
    if len(sys.argv) < 2:
        print('ERROR: No input file provided.', file=sys.stderr)
        sys.exit(-1)
    if not os.path.isfile(sys.argv[1]):
        print('ERROR: Provided file does not exist.', file=sys.stderr)
    plot_file(sys.argv[1])

if __name__ == '__main__':
    main()
