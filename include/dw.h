#ifndef DW_H
#define DW_H

class Buffer {
public:
  Buffer(int size);
  ~Buffer();
  int get_size() const;
  int get_value(int index) const;
  void set_value(int index, int value);

private:
  int *data_;
  int size_;
};

#endif
