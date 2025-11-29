@protocol WAMagicARAdaptorDelegate;

@interface WAMagicARAdaptor : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    void *_runtime;
    id<WAMagicARAdaptorDelegate> _delegate;
}

- (void)dealloc;
- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1 delegate:(id)a2;
- (struct __CVBuffer { } *)getCurCVPixelBuffer;
- (void)releaseContext;
- (void).cxx_destruct;

@end
