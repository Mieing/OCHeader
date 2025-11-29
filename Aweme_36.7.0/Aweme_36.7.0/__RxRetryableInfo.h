@class NSString, NSTimer, RxPromise;
@protocol RxRetryable, RxInjector, RxReachabilityInterface, RxRetryManagerPrivateInterface;

@interface __RxRetryableInfo : NSObject <RxCancellable, RxReachabilityDelegate, NSLocking> {
    struct MutexLock { void /* function */ **_vptr$LockingInterface; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _impl; } _mutex;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RxReachabilityInterface> reachability;
@property (readonly, nonatomic) id<RxRetryable> retryable;
@property (weak, nonatomic) id<RxRetryManagerPrivateInterface> retryManager;
@property (readonly, copy, nonatomic) NSString *retryableIdentifier;
@property (readonly, copy, nonatomic) NSString *retryableVersion;
@property (readonly, nonatomic) long long retryableMaxRetryTimes;
@property (readonly, nonatomic) double retryableBaseBackoffDuration;
@property (readonly, nonatomic) long long retryableReasons;
@property (readonly, nonatomic) BOOL wantsTimerWakesup;
@property (readonly, nonatomic) BOOL wantsNetworkWakesup;
@property (readonly, nonatomic) double nextDuration;
@property (readonly, nonatomic) NSTimer *timer;
@property long long retryTimes;
@property (retain) RxPromise *lastPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)rx_reachability:(id)a0 didChangeNetworkReachabilityStatus:(long long)a1;
- (void)__invokeIfNeededWithReason:(long long)a0;
- (id)__invokeWithReason:(long long)a0;
- (void)__scheduleWithReason:(long long)a0;
- (void)__handleTimer:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)schedule;
- (id).cxx_construct;
- (void)dealloc;
- (void)cancel;

@end
