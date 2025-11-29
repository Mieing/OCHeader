@class NSMutableSet;
@protocol RxInjector;

@interface AWERTVInjectorAdaptor : NSObject {
    struct SpinLock { void /* function */ **_vptr$LockingInterface; struct atomic_flag { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } locked; } _lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSMutableSet *waitInjectInstances;

+ (BOOL)injectProperties:(id)a0;
+ (id)sharedInstance;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)__injectProperties:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
