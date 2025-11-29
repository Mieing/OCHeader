@interface UnitRCCppObj : NSObject {
    struct SafeLS<std::shared_ptr<unit_rc::BaseRC>> { struct shared_ptr<unit_rc::BaseRC> { struct BaseRC *__ptr_; struct __shared_weak_count *__cntrl_; } _value; struct SpinLock { struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _flag; } _lock; } _strongCpp;
    struct SafeLS<std::weak_ptr<unit_rc::BaseRC>> { struct weak_ptr<unit_rc::BaseRC> { struct BaseRC *__ptr_; struct __shared_weak_count *__cntrl_; } _value; struct SpinLock { struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _flag; } _lock; } _weakCpp;
}

- (id)initWithStrongCpp:(const void *)a0;
- (id)initWithWeakCpp:(const void *)a0;
- (void)setStrongCpp:(const void *)a0;
- (void)setWeakCpp:(const void *)a0;
- (struct shared_ptr<unit_rc::BaseRC> { struct BaseRC *x0; struct __shared_weak_count *x1; })strongCpp;
- (struct weak_ptr<unit_rc::BaseRC> { struct BaseRC *x0; struct __shared_weak_count *x1; })weakCpp;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
