// Generated from split_quant8_1.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::split_quant8_1 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, split_quant8_1) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::split_quant8_1
TEST_AVAILABLE_SINCE(V1_2, split_quant8_1, generated_tests::split_quant8_1::CreateModel)

namespace generated_tests::split_quant8_1 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_quant8_1_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::split_quant8_1

namespace generated_tests::split_quant8_1 {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, split_quant8_1_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::split_quant8_1
TEST_AVAILABLE_SINCE(V1_2, split_quant8_1_all_inputs_as_internal, generated_tests::split_quant8_1::CreateModel_all_inputs_as_internal)

namespace generated_tests::split_quant8_1 {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_quant8_1_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::split_quant8_1

namespace generated_tests::split_quant8_1 {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, split_quant8_1_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::split_quant8_1

namespace generated_tests::split_quant8_1 {

void CreateModel_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_quant8_1_relaxed_dynamic_output_shape) {
    execute(CreateModel_relaxed_dynamic_output_shape,
            is_ignored_relaxed_dynamic_output_shape,
            get_examples_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::split_quant8_1

namespace generated_tests::split_quant8_1 {

void CreateModel_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, split_quant8_1_relaxed_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_inputs_as_internal,
            is_ignored_relaxed_all_inputs_as_internal,
            get_examples_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::split_quant8_1

namespace generated_tests::split_quant8_1 {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, split_quant8_1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::split_quant8_1

