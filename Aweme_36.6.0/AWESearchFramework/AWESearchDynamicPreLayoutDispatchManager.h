@class NSString, CachalotRunloopIdleObserver, CachalotLinkedTaskScheduler;

@interface AWESearchDynamicPreLayoutDispatchManager : NSObject <CachalotRunloopIdleHandler>

@property (retain, nonatomic) CachalotRunloopIdleObserver *runloopIdleObserver;
@property (retain, nonatomic) CachalotLinkedTaskScheduler *renderScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)loopEnded;
- (void)idlePeriodBegin;
- (void)idlePeriodEnd;
- (void)dispatchTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
