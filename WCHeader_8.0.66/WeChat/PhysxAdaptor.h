@interface PhysxAdaptor : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct Phys3DScriptState { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; } *_phys3dScriptState;
}

- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)setLogDelegate:(id)a0;
- (void)releaseContext;
- (void)dealloc;

@end
