@class WAEJBindingGlobalUtils;

@interface WAEJBindingBindingObject : WAEJBindingEventedBase {
    WAEJBindingGlobalUtils *global;
}

@property (nonatomic) BOOL stopRender;

+ (void *)_ptr_to_get___id;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)prepareGarbageCollection;
- (struct OpaqueJSValue { } *)_get___id:(struct OpaqueJSContext { } *)a0;

@end
