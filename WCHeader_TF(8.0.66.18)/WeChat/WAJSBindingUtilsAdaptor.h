@interface WAJSBindingUtilsAdaptor : NSObject {
    struct OpaqueJSContext { } *_jscontext;
}

- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)releaseContext;

@end
