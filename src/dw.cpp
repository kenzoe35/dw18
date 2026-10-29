#include "dw.h"

Buffer::Buffer(int size) { size_ = size data_ = new int[size_]; }

Buffer::~Buffer() const { delete[] data_; }

int Buffer::get_size() const { return size_; }

int Buffer::get_value(int index) const { return data_[index] }

void Buffer::set_value(int index, int value) { data_[index] = value; }
