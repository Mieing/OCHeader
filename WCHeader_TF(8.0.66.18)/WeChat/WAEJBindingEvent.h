@class NSString;

@interface WAEJBindingEvent : WAEJBindingBase {
    NSString *type;
    struct OpaqueJSValue { } *jsTarget;
    struct OpaqueJSValue { } *jsTimestamp;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 type:(id)a2 target:(struct OpaqueJSValue { } *)a3;
+ (void *)_ptr_to_get_target;
+ (void *)_ptr_to_get_currentTarget;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_timestamp;
+ (void *)_ptr_to_func_preventDefault;
+ (void *)_ptr_to_func_stopPropagation;

- (void)dealloc;
- (struct OpaqueJSValue { } *)_get_target:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_currentTarget:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_type:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_timestamp:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_func_preventDefault:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_stopPropagation:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;

@end
