@class ACCRecursiveLock, ACCWeakObserverManager, NSString;
@protocol ACCJobQueue;

@interface ACCObservableQueue : NSObject <ACCJobQueue, ACCObservable>

@property (retain, nonatomic) id<ACCJobQueue> jobQueue;
@property (retain, nonatomic) ACCRecursiveLock *lockedAttachments;
@property (readonly, nonatomic) ACCWeakObserverManager *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unobserve:(id)a0;
- (id)takeJobs:(id)a0;
- (id)allJobs:(id)a0;
- (long long)intensiveType;
- (id)cancelAll:(id)a0;
- (BOOL)canDequeue:(id)a0;
- (id)takeAll:(id)a0;
- (id)allGroupNamesOfJob;
- (void)p_onWillStartJob:(id)a0;
- (void)p_didCompleteJob:(id)a0 costMs:(long long)a1;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)observe:(id)a0;
- (unsigned long long)count:(id)a0;
- (id)context;
- (id)initWith:(long long)a0;
- (BOOL)isEmpty:(id)a0;
- (id)dequeue:(id)a0;
- (id)peek:(id)a0;

@end
