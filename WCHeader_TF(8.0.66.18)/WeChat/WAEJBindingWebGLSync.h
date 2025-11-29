@interface WAEJBindingWebGLSync : WAEJBindingWebGLObject {
    struct __GLsync { } *sync;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 webglContext:(id)a2 sync:(struct __GLsync { } *)a3;
+ (struct __GLsync { } *)syncFromJSValue:(struct OpaqueJSValue { } *)a0;

- (id)initWithWebGLContext:(id)a0 sync:(struct __GLsync { } *)a1;
- (void)invalidate;

@end
