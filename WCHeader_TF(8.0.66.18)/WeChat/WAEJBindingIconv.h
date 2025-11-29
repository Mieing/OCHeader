@class NSString;

@interface WAEJBindingIconv : WAEJBindingBase {
    NSString *_from;
    NSString *_to;
}

+ (void *)_ptr_to_func_convert;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_func_convert:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;

@end
