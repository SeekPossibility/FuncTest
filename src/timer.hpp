// Copyright (c) 2018 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#ifndef INCLUDE_JET_TIMER_H_
#define INCLUDE_JET_TIMER_H_

#include <chrono>

//! Simple timer class.
class Timer {
 public:
    //! Constructs the timer and start ticking.
   Timer() {
      _startingPoint = _clock.now();
   }
    //! Returns the time duration since the creation or reset in seconds.
   double durationInSeconds() const {
      auto end = std::chrono::steady_clock::now();
      auto count = std::chrono::duration_cast<std::chrono::microseconds>(
         end - _startingPoint).count();
      return count / 1000000.0;
   }
    //! Resets the timer.
   void reset() {
      _startingPoint = _clock.now();
   }
 private:
    std::chrono::steady_clock _clock;
    std::chrono::steady_clock::time_point _startingPoint;
};


#endif  // INCLUDE_JET_TIMER_H_
