// Generated from fully_connected_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_quant8 {

// Create the model
Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1, 1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.25f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1},
            .numberOfConsumers = 0,
            .scale = 1.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::FULLY_CONNECTED,
            .inputs = {0, 1, 2, 3},
            .outputs = {4},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {4};
    std::vector<uint8_t> operandValues = {
      2, 4, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::fully_connected_quant8
