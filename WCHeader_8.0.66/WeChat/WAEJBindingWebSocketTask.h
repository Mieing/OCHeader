@class NSString;

@interface WAEJBindingWebSocketTask : WAEJBindingEventedBase {
    NSString *taskId;
    unsigned int workerId;
}

+ (void *)_ptr_to_func_connect;
+ (void *)_ptr_to_func_send;
+ (void *)_ptr_to_func_close;
+ (void *)_ptr_to_get_onmessage;
+ (void *)_ptr_to_set_onmessage;
+ (void *)_ptr_to_get_onopen;
+ (void *)_ptr_to_set_onopen;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onerror;
+ (void *)_ptr_to_get_onclose;
+ (void *)_ptr_to_set_onclose;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (struct OpaqueJSValue { } *)_func_connect:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_send:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_close:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (void)onHeaderReceived:(id)a0 profile:(id)a1;
- (void)onMessageReceived:(id)a0;
- (void)onClose:(id)a0 code:(unsigned int)a1;
- (void)onError:(id)a0 code:(unsigned int)a1;

@end
