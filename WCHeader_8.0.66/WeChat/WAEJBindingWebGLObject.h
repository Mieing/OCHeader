@class WAEJBindingCanvasContextWebGLBase;

@interface WAEJBindingWebGLObject : WAEJBindingBase {
    unsigned int index;
    WAEJBindingCanvasContextWebGLBase *webglContext;
}

+ (int)indexFromJSValue:(struct OpaqueJSValue { } *)a0;
+ (id)webGLObjectFromJSValue:(struct OpaqueJSValue { } *)a0;
+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 webglContext:(id)a2 index:(unsigned int)a3;
+ (void *)_ptr_to_func___id;

- (id)initWithWebGLContext:(id)a0 index:(unsigned int)a1;
- (void)invalidate;
- (unsigned int)getIndex;
- (void)dealloc;
- (struct OpaqueJSValue { } *)_func___id:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;

@end
