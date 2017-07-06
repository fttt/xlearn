//------------------------------------------------------------------------------
// Copyright (c) 2016 by contributors. All Rights Reserved.
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
//------------------------------------------------------------------------------

/*
Author: Chao Ma (mctt90@gmail.com)
This file defines the LinearScore class.
*/

#ifndef XLEARN_LINEAR_SCORE_FILE_SPLITER_H_
#define XLEARN_LINEAR_SCORE_FILE_SPLITER_H_

#include "src/base/common.h"
#include "src/loss/score_function.h"

namespace xLearn {

//------------------------------------------------------------------------------
// LinearScore is used to implemente generalized linear models (GLMs), in
// which the socre function is y = wTx.
//------------------------------------------------------------------------------
class LinearScore : public Score {
 public:
  // Constructor and Desstructor
  LinearScore() { }
  ~LinearScore() { }

  // This function needs to be invoked before using this class.
  void Initialize(const HyperParam& hyper_param) {
    /* Do nothing */
  }

  // Given one exmaple and current model, return the score.
  real_t CalcScore(const SparseRow* row,
                   const std::vector<real_t>* w);

 private:
  DISALLOW_COPY_AND_ASSIGN(LinearScore);
};

} // namespace xLearn

#endif // XLEARN_LINEAR_SCORE_FILE_SPLITER_H_
