@interface WAEJBindingWebGLShaderPrecisionFormat : WAEJBindingBase {
    int rangeMin;
    int rangeMax;
    int precision;
}

+ (void *)_ptr_to_get_rangeMin;
+ (void *)_ptr_to_get_rangeMax;
+ (void *)_ptr_to_get_precision;
+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 rangeMin:(int)a2 rangeMax:(int)a3 precision:(int)a4;
+ (void *)_ptr_to_get___id;

- (id)initWithRangeMin:(int)a0 rangeMax:(int)a1 precision:(int)a2;
- (struct OpaqueJSValue { } *)_get_rangeMin:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_rangeMax:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_precision:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get___id:(struct OpaqueJSContext { } *)a0;

@end
