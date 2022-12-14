/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <string>

namespace android {
namespace media {

/**
 * Mode of head-tracking.
 */
enum class HeadTrackingMode {
    /** No head-tracking - screen-to-head pose is assumed to be identity. */
    STATIC,
    /** Head tracking enabled - world-to-screen pose is assumed to be identity. */
    WORLD_RELATIVE,
    /** Full screen-to-head tracking enabled. */
    SCREEN_RELATIVE,
};

std::string toString(HeadTrackingMode mode);

}  // namespace media
}  // namespace android
