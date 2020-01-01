// Copyright 2020 Max Godfrey
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "points.h"

#include <cstdlib>
#include <ctime>
#include <fstream>

namespace points {

void GeneratePoints(std::string outfile_name) {
  std::srand(std::time(nullptr));
  std::ofstream fout(outfile_name);
  for (int written_points = 0; written_points < NUM_POINTS; ++written_points) {
    fout << std::rand() % MAX_COORD_VALUE << ' '
         << std::rand() % MAX_COORD_VALUE << std::endl;
  }
  fout.close();
}

}  // namespace points
