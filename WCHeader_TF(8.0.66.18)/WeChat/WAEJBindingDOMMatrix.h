@interface WAEJBindingDOMMatrix : WAEJBindingBase

@property (nonatomic) struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } data;

+ (void *)_ptr_to_get_a;
+ (void *)_ptr_to_get_b;
+ (void *)_ptr_to_get_c;
+ (void *)_ptr_to_get_d;
+ (void *)_ptr_to_get_e;
+ (void *)_ptr_to_get_f;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_a:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_b:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_c:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_d:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_e:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_f:(struct OpaqueJSContext { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
