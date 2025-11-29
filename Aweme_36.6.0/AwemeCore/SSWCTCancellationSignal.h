@interface SSWCTCancellationSignal : NSObject {
    struct shared_ptr<volatile bool> { BOOL *__ptr_; struct __shared_weak_count *__cntrl_; } m_signal;
}

- (struct shared_ptr<volatile bool> { BOOL *x0; struct __shared_weak_count *x1; })getInnerSignal;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)cancel;

@end
