@class ACCWeakObserverManager, NSString, ACCObservableQueue, ACCThrottler, ACCMainRunloopObserver;

@interface ACCIdleInUTJobScheduler : NSObject <ACCQueueObserver, ACCMainRunloopObserverDelegate, ACCObservable>

@property (class, readonly, nonatomic) long long defaultThrottlerTimeIntervalSeconds;
@property (class, readonly, nonatomic) long long defaultMaxMainThreadBlockingTimeMs;

@property (readonly, nonatomic) ACCMainRunloopObserver *mainRunloopObserver;
@property (readonly, nonatomic) ACCThrottler *throttler;
@property (readonly, nonatomic) ACCWeakObserverManager *observerManager;
@property (readonly, nonatomic) ACCObservableQueue *observableQueue;
@property (nonatomic) long long maxMainThreadBlockingTimeMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unobserve:(id)a0;
- (void)p_endMainRunloopObserverIfNeeded;
- (void)didAddJob:(id)a0 on:(id)a1;
- (void)mainRunloopObserverDidReceiveCallback:(id)a0 activity:(unsigned long long)a1;
- (void)flush:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)observe:(id)a0;

@end
