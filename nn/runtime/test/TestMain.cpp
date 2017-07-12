/*
 * Copyright (C) 2017 The Android Open Source Project
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

#include "Manager.h"
#include "NeuralNetworksWrapper.h"
#include "SampleDriver.h"
#include "Utils.h"

#include <gtest/gtest.h>

using namespace android::nn::wrapper;

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);

    // Test with the CPU default path
    int n1 = RUN_ALL_TESTS();

    // Create our own driver to simulate testing through the HAL.
    // A real Android program would not do this.
    nnAssert(ANeuralNetworksInitialize() == ANEURALNETWORKS_NO_ERROR);
    std::shared_ptr<android::nn::SampleDriver> sampleDriver {new android::nn::SampleDriver()};
    android::nn::DriverManager::get()->registerDriver(sampleDriver);

    // Tests a second time.
    int n2 = RUN_ALL_TESTS();
    ANeuralNetworksShutdown();

    return n1 != 0 || n2 != 0;;
}