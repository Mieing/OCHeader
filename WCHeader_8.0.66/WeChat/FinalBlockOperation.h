@interface FinalBlockOperation : NSOperation {
    id /* block */ _mainBlock;
    id /* block */ _finalBlock;
    struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _executed;
}

- (id)initWithMainBlock:(id /* block */)a0 finalBlock:(id /* block */)a1;
- (void)executeFinalOnce;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;

@end
