/*!
 * @file sequence.cpp
 *
 * @brief Sequence class source file
 */

#include "sequence.hpp"

namespace spoa {

Sequence::Sequence(const char* name, uint32_t name_length, const char* data,
    uint32_t data_length)
        : name_(name, name_length), data_(data, data_length), quality_(
        data_length, 34) {
}

Sequence::Sequence(const char* name, uint32_t name_length, const char* data,
    uint32_t data_length, const char* quality, uint32_t quality_length)
        : name_(name, name_length), data_(data, data_length), quality_(quality,
        quality_length) {
}

}
