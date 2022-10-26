/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file - This file contains point r/w test vectors.
 */

#pragma once

namespace chip {
namespace Crypto {

struct spake2p_point_rw_tv
{
    const uint8_t * point;
    size_t point_len;
};

static const uint8_t chiptest_7a17d01b7170_point_1[] = { 0x04, 0x49, 0xb0, 0x3f, 0xe6, 0x0b, 0x27, 0x08, 0x19, 0xdb, 0x80,
                                                         0xa6, 0x39, 0x8f, 0xd2, 0x48, 0xdd, 0x15, 0xfa, 0xc4, 0x0b, 0x7f,
                                                         0xae, 0x9c, 0x32, 0x1a, 0xad, 0xb6, 0x82, 0x71, 0xa3, 0x26, 0xa0,
                                                         0xc3, 0x0a, 0x9d, 0x00, 0x50, 0x85, 0x58, 0x2c, 0x57, 0xfb, 0xbe,
                                                         0x0a, 0xaf, 0x59, 0xc5, 0xc4, 0xaf, 0x3a, 0x40, 0x1e, 0xfd, 0xee,
                                                         0x42, 0x82, 0x64, 0xbd, 0x3b, 0x1e, 0xd6, 0xb3, 0xbb, 0x75 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_2 = {
    .point     = chiptest_7a17d01b7170_point_1,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_3[] = { 0x04, 0x16, 0xb0, 0x16, 0x68, 0x96, 0xfa, 0xe9, 0x6d, 0x74, 0x01,
                                                         0x0b, 0x3d, 0x24, 0x68, 0x00, 0xd1, 0x14, 0xd5, 0xb9, 0xe1, 0x74,
                                                         0xc6, 0x05, 0x46, 0x16, 0x32, 0x00, 0xe5, 0x37, 0x65, 0xf8, 0x58,
                                                         0x5f, 0xc7, 0x9a, 0x94, 0xa6, 0x20, 0xf7, 0x71, 0x7c, 0x3c, 0xba,
                                                         0xfd, 0x9e, 0x6d, 0x08, 0x23, 0xde, 0x7c, 0x19, 0x40, 0xcb, 0xc2,
                                                         0xc1, 0xc0, 0x89, 0x5d, 0xbf, 0xd3, 0xa8, 0x86, 0xe2, 0x07 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_4 = {
    .point     = chiptest_7a17d01b7170_point_3,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_5[] = { 0x04, 0x9c, 0xf2, 0x9b, 0x9e, 0x7b, 0xb0, 0xa5, 0xa5, 0xa3, 0x0d,
                                                         0x53, 0x6e, 0x88, 0x52, 0x7d, 0xb8, 0xf5, 0xef, 0x05, 0x72, 0xaa,
                                                         0x1f, 0xf3, 0x81, 0xb2, 0x64, 0xb0, 0xbe, 0x98, 0x38, 0x8f, 0xb6,
                                                         0x44, 0x5f, 0x13, 0x24, 0x64, 0x32, 0x91, 0x8b, 0xe8, 0x93, 0x3b,
                                                         0x30, 0x4d, 0x3a, 0x7f, 0x53, 0x01, 0xea, 0x42, 0x8f, 0x2a, 0xc1,
                                                         0x3c, 0x2e, 0x8b, 0x0e, 0xca, 0x6b, 0xa9, 0x39, 0x46, 0xde };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_6 = {
    .point     = chiptest_7a17d01b7170_point_5,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_7[] = { 0x04, 0xce, 0xcd, 0x78, 0x57, 0x53, 0x11, 0xf3, 0xe9, 0x48, 0x26,
                                                         0x5a, 0x07, 0xa5, 0x5e, 0x19, 0x20, 0xda, 0xdc, 0xf4, 0x45, 0x05,
                                                         0xa9, 0xff, 0x2c, 0xc9, 0x57, 0x88, 0x9f, 0x56, 0x84, 0x39, 0x55,
                                                         0xda, 0x1a, 0x53, 0x86, 0x9d, 0x93, 0x7c, 0xb2, 0x77, 0xc2, 0x79,
                                                         0x6b, 0x83, 0x24, 0xdb, 0xe9, 0xd6, 0x7e, 0x1c, 0x81, 0x79, 0xa8,
                                                         0x87, 0xed, 0xa9, 0xe5, 0x1b, 0x54, 0x20, 0x14, 0xd5, 0x34 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_8 = {
    .point     = chiptest_7a17d01b7170_point_7,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_9[] = { 0x04, 0x87, 0x86, 0x73, 0x86, 0xbf, 0x4b, 0xa2, 0x5e, 0x79, 0xdf,
                                                         0x0a, 0x7c, 0xdf, 0x16, 0xf2, 0x31, 0x38, 0x97, 0x07, 0x86, 0x07,
                                                         0xa3, 0xdd, 0xba, 0x88, 0x8b, 0xaa, 0x94, 0xc0, 0xec, 0x83, 0xd9,
                                                         0xf4, 0xee, 0xb4, 0x59, 0x44, 0x73, 0xad, 0xc6, 0xb8, 0x6e, 0x91,
                                                         0x50, 0x4e, 0xe6, 0xdf, 0x01, 0x7c, 0x98, 0xf4, 0x61, 0x29, 0xa4,
                                                         0x49, 0xb4, 0xb9, 0x5f, 0xe3, 0x23, 0xcf, 0x3c, 0x78, 0xb1 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_10 = {
    .point     = chiptest_7a17d01b7170_point_9,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_11[] = { 0x04, 0x7f, 0xe2, 0xf5, 0xc6, 0x02, 0xd8, 0xfb, 0xe2, 0x95, 0x65,
                                                          0x68, 0xef, 0x1e, 0x1f, 0x6f, 0x8b, 0x58, 0xb0, 0xae, 0x83, 0x0c,
                                                          0x2e, 0x77, 0xf4, 0x30, 0xb8, 0xab, 0x03, 0x5d, 0x77, 0xa2, 0x60,
                                                          0x82, 0xc0, 0xf7, 0x5d, 0x2a, 0x7b, 0x52, 0x7b, 0xd4, 0x33, 0xfb,
                                                          0x4e, 0x35, 0x67, 0x62, 0x83, 0xae, 0xe2, 0x6b, 0xb0, 0x77, 0x72,
                                                          0x87, 0x74, 0x6d, 0x5a, 0x6e, 0xd5, 0x5c, 0x0e, 0x66, 0x3c };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_12 = {
    .point     = chiptest_7a17d01b7170_point_11,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_13[] = { 0x04, 0x2e, 0x93, 0xb2, 0xe0, 0x67, 0xe7, 0xfe, 0xb1, 0xc3, 0x01,
                                                          0x80, 0x7e, 0x64, 0xe7, 0xdb, 0x80, 0x13, 0xab, 0x3b, 0xda, 0xc6,
                                                          0x1c, 0x49, 0xc8, 0x8b, 0x5b, 0x46, 0xf5, 0xcf, 0x00, 0xbd, 0xa7,
                                                          0x7b, 0x95, 0xcb, 0xeb, 0x41, 0x8f, 0xd0, 0x96, 0x3e, 0x61, 0xab,
                                                          0xd3, 0xaf, 0xf6, 0x33, 0x23, 0x4b, 0x02, 0xca, 0x3f, 0x37, 0xfe,
                                                          0x98, 0xc2, 0x17, 0x1e, 0x00, 0xd8, 0x8a, 0xed, 0x01, 0x63 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_14 = {
    .point     = chiptest_7a17d01b7170_point_13,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_15[] = { 0x04, 0xa4, 0xee, 0xd2, 0x8e, 0x65, 0xb9, 0x85, 0xfb, 0xe8, 0x43,
                                                          0x82, 0xd1, 0xab, 0x1e, 0xa9, 0x94, 0x9c, 0x85, 0x2c, 0x8a, 0xd5,
                                                          0x86, 0x68, 0x92, 0x7a, 0xac, 0x6f, 0x48, 0x59, 0x14, 0xc8, 0x6b,
                                                          0xe1, 0x46, 0x12, 0x9b, 0x7d, 0xed, 0x38, 0x92, 0xd0, 0xc9, 0xa9,
                                                          0xf7, 0x52, 0xe3, 0x54, 0x31, 0x79, 0x72, 0x50, 0x32, 0x76, 0xe5,
                                                          0x2d, 0x8f, 0x84, 0xa2, 0x91, 0x50, 0x87, 0x59, 0xbc, 0x73 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_16 = {
    .point     = chiptest_7a17d01b7170_point_15,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_17[] = { 0x04, 0x10, 0x54, 0xec, 0xe6, 0x1a, 0x06, 0x46, 0xe4, 0xd0, 0xe1,
                                                          0x3d, 0x7f, 0x0d, 0xb5, 0x7a, 0x9e, 0x81, 0x92, 0x3d, 0x4a, 0xe0,
                                                          0x58, 0xef, 0xe1, 0x51, 0x98, 0x2f, 0xe3, 0x27, 0x40, 0xed, 0x6f,
                                                          0x59, 0x37, 0xba, 0xe4, 0x78, 0x02, 0xac, 0xd2, 0x70, 0x11, 0x9e,
                                                          0xa7, 0x7e, 0x74, 0xcb, 0xc7, 0x6d, 0xc3, 0xfa, 0x38, 0x2b, 0x8b,
                                                          0xc7, 0x9e, 0x78, 0xe5, 0x5b, 0x72, 0xe7, 0x6e, 0x32, 0xf2 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_18 = {
    .point     = chiptest_7a17d01b7170_point_17,
    .point_len = 65,
};
static const uint8_t chiptest_7a17d01b7170_point_19[] = { 0x04, 0xea, 0x67, 0x7b, 0x60, 0xaa, 0xd0, 0x57, 0xbb, 0xbd, 0x82,
                                                          0xcf, 0x8d, 0xa2, 0x0c, 0x91, 0xf3, 0x01, 0x15, 0x73, 0xbd, 0x82,
                                                          0x09, 0x6e, 0x82, 0xc6, 0xc8, 0x62, 0xe6, 0xb3, 0x3e, 0x78, 0x97,
                                                          0x91, 0x8c, 0x67, 0x46, 0x6e, 0x58, 0x5e, 0xca, 0x5e, 0xa9, 0xde,
                                                          0xe1, 0x8e, 0x4b, 0x81, 0xbc, 0xfb, 0x66, 0xdb, 0x84, 0x69, 0x43,
                                                          0x80, 0x72, 0xa2, 0x79, 0xe0, 0x4b, 0xb3, 0xc6, 0x43, 0xb9 };
static const struct spake2p_point_rw_tv chiptest_7a17d01b7170_test_vector_20 = {
    .point     = chiptest_7a17d01b7170_point_19,
    .point_len = 65,
};
static const struct spake2p_point_rw_tv * point_rw_tvs[] = {
    &chiptest_7a17d01b7170_test_vector_2,  &chiptest_7a17d01b7170_test_vector_4,  &chiptest_7a17d01b7170_test_vector_6,
    &chiptest_7a17d01b7170_test_vector_8,  &chiptest_7a17d01b7170_test_vector_10, &chiptest_7a17d01b7170_test_vector_12,
    &chiptest_7a17d01b7170_test_vector_14, &chiptest_7a17d01b7170_test_vector_16, &chiptest_7a17d01b7170_test_vector_18,
    &chiptest_7a17d01b7170_test_vector_20
};

} // namespace Crypto
} // namespace chip
