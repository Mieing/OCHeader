@class NSString, NSMutableDictionary;
@protocol RxInjector, RxReachabilityInterface;

@interface __RxRetryManager : NSObject <RxReachabilityDelegate, RxRetryManagerPrivateInterface> {
    struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex;
    NSMutableDictionary *_retryableInfos;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RxReachabilityInterface> reachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__removeRetryable:(id)a0 forIdentifier:(id)a1;
- (void)addRetryable:(id)a0;
- (void)removeRetryable:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
