@class WAEJCanvasGradient;

@interface WAEJBindingCanvasGradient : WAEJBindingBase {
    WAEJCanvasGradient *gradient;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 gradient:(id)a2;
+ (id)gradientFromJSValue:(struct OpaqueJSValue { } *)a0;
+ (void *)_ptr_to_func_addColorStop;
+ (id)gradientFromInstance:(unsigned long long)a0;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get___type;

- (void)dealloc;
- (struct OpaqueJSValue { } *)_func_addColorStop:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_get_instance:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get___type:(struct OpaqueJSContext { } *)a0;

@end
