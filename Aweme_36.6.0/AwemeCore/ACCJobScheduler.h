@class NSString, ACCWeakObserverManager, ACCIdleInUTJobScheduler;

@interface ACCJobScheduler : NSObject <ACCIdleInUTJobSchedulerObserver, ACCQueueObserver, ACCObservable>

@property (readonly, nonatomic) ACCWeakObserverManager *observerManager;
@property (readonly, nonatomic) ACCIdleInUTJobScheduler *idleInUTJobQueueScheduler;
@property (nonatomic) long long maxMainThreadBlockingTimeMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)unobserve:(id)a0;
- (void)mainThreadBlockedExceedExpectation:(id)a0 on:(id)a1 costMs:(long long)a2;
- (void)didAddJob:(id)a0 on:(id)a1;
- (void)willStartJob:(id)a0 on:(id)a1 pendingMs:(long long)a2;
- (void)didCompleteJob:(id)a0 on:(id)a1 costMs:(long long)a2;
- (void)didCancelJobs:(id)a0 on:(id)a1;
- (void)flush:(id)a0 completion:(id /* block */)a1;
- (id)p_observerQueueWith:(long long)a0;
- (id)pendingJobs:(id)a0 pollMode:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)add:(id)a0;
- (void)observe:(id)a0;

@end
