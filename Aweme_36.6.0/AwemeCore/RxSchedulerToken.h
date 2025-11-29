@class NSString;

@interface RxSchedulerToken : NSObject <RxSchedulerCancellable> {
    struct SpinLock { void /* function */ **_vptr$LockingInterface; struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } locked; } _spin;
    id /* block */ _block;
    BOOL _cancelled;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)whenCancelled:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (void)cancel;

@end
