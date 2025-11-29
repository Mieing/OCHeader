@protocol WeXNetLogDelegate, WeXNetAdaptorDelegate;

@interface WeXNetAdaptor : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct unique_ptr<mm::JSHolder<OpaqueJSValue *>, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> { struct __compressed_pair<mm::JSHolder<OpaqueJSValue *> *, std::default_delete<mm::JSHolder<OpaqueJSValue *>>> { void *__value_; } __ptr_; } jsInferenceHolder;
    struct shared_ptr<WeXNet::MNXNetRuntime> { struct MNXNetRuntime *__ptr_; struct __shared_weak_count *__cntrl_; } mRuntime;
    id<WeXNetAdaptorDelegate, WeXNetLogDelegate> weakDelegate;
}

- (void)dealloc;
- (void)log:(int)a0 message:(const void *)a1;
- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1 delegate:(id)a2;
- (void)releaseContext;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
