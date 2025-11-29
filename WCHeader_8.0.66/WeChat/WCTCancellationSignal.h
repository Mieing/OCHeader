@interface WCTCancellationSignal : NSObject {
    struct shared_ptr<volatile bool> { BOOL *__ptr_; struct __shared_weak_count *__cntrl_; } m_signal;
}

- (id)init;
- (struct shared_ptr<volatile bool> { BOOL *x0; struct __shared_weak_count *x1; })getInnerSignal;
- (void)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
