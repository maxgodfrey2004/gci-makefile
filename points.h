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

#ifndef POINTS_H_
#define POINTS_H_

#include <string>

namespace points {

const int NUM_POINTS = 100;
const int MAX_COORD_VALUE = 100000;

void GeneratePoints(std::string outfile_name);

}  // namespace points

#endif  // POINTS_H_
