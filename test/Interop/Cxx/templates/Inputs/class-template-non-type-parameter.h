#ifndef TEST_INTEROP_CXX_TEMPLATES_INPUTS_CLASS_TEMPLATE_NON_TYPE_PARAMETER_H
#define TEST_INTEROP_CXX_TEMPLATES_INPUTS_CLASS_TEMPLATE_NON_TYPE_PARAMETER_H

template<class T, auto Size>
struct MagicArray {
    T t[Size];
};

typedef MagicArray<int, 2> MagicIntPair;

#endif // TEST_INTEROP_CXX_TEMPLATES_INPUTS_CLASS_TEMPLATE_NON_TYPE_PARAMETER_H
