@class NSMutableDictionary;

@interface WAEJBindingEventedBase : WAEJBindingBase {
    NSMutableDictionary *eventListeners;
    NSMutableDictionary *onCallbacks;
}

+ (void *)_ptr_to_func_addEventListener;
+ (void *)_ptr_to_func_removeEventListener;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)dealloc;
- (struct OpaqueJSValue { } *)getCallbackWithType:(id)a0 ctx:(struct OpaqueJSContext { } *)a1;
- (void)setCallbackWithType:(id)a0 ctx:(struct OpaqueJSContext { } *)a1 callback:(struct OpaqueJSValue { } *)a2;
- (struct OpaqueJSValue { } *)_func_addEventListener:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_removeEventListener:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (void)triggerEvent:(id)a0 isMain:(BOOL)a1 argc:(int)a2 argv:(const struct OpaqueJSValue **)a3;
- (void)triggerEvent:(id)a0 isMain:(BOOL)a1;
- (void)triggerEvent:(id)a0 isMain:(BOOL)a1 properties:(struct { char *x0; struct OpaqueJSValue *x1; } *)a2;

@end
