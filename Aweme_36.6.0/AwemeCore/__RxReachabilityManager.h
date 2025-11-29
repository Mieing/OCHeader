@class NSString, Reachability, RxMultipleDelegate, NSObject;
@protocol RxReachabilityDelegate, RxInjector, OS_dispatch_queue;

@interface __RxReachabilityManager : NSObject <RxReachabilityInterface> {
    struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex;
    Reachability *_reachability;
    RxMultipleDelegate<RxReachabilityDelegate> *_delegates;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (unsigned int)reachabilityFlags;
- (id).cxx_construct;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end
