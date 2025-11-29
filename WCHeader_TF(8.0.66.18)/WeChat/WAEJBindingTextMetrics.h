@interface WAEJBindingTextMetrics : WAEJBindingBase {
    struct { float width; float ascent; float descent; } metrics;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 metrics:(struct { float x0; float x1; float x2; })a2;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_actualBoundingBoxAscent;
+ (void *)_ptr_to_get_actualBoundingBoxDescent;

- (struct OpaqueJSValue { } *)_get_width:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_actualBoundingBoxAscent:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_actualBoundingBoxDescent:(struct OpaqueJSContext { } *)a0;

@end
