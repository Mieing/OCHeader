@interface XNetInferenceError : NSError {
    struct shared_ptr<xnet::Status> { struct Status *__ptr_; struct __shared_weak_count *__cntrl_; } _underlying;
}

- (id)initWithUnderlying:(const void *)a0;
- (id)description;
- (id)descriptionWithoutCallStack;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
