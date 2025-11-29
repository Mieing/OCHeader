@class WAEJBindingCanvasContextWebGLBase;

@interface WAEJBindingWebGLExtension : WAEJBindingBase {
    WAEJBindingCanvasContextWebGLBase *webglContext;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 webglContext:(id)a2;

- (id)initWithWebGLContext:(id)a0;
- (void)dealloc;
- (void)onEnable;

@end
