@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMJobManagerTracker : IESIMJobManagerInnerObject

@property (readonly, nonatomic) NSMutableDictionary *objExt;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *recordAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *trackQueue;
@property (nonatomic) double lastInjectTime;
@property (nonatomic) double deltaOfCaAndNsTime;
@property (nonatomic) double managerTrackWaitTimeInterval;
@property (nonatomic) double createTime;
@property (nonatomic) BOOL shouldReport;

- (double)p_currentTime;
- (void)onInject;
- (void)onJobPending:(id)a0;
- (void)onJobDroped:(id)a0;
- (void)onEventFire:(id)a0;
- (void)onEventBlockingJobsDone:(id)a0;
- (void)onEventAsyncJobsDone:(id)a0;
- (void)onJobRunning:(id)a0;
- (void)onJobDone:(id)a0;
- (id)p_settingKeyWithName:(id)a0;
- (double)p_fetchManagerTrackWaitTime;
- (BOOL)p_decideShouldReport;
- (void)p_waitAndTrackManager:(id)a0;
- (void)p_asyncTickObject:(id)a0 withKey:(long long)a1;
- (void)p_asyncFinalTrackEvent:(id)a0 extDict:(id)a1;
- (void)p_asyncPopObjectRecord:(id)a0 withCompletion:(id /* block */)a1;
- (void)p_trackWithName:(id)a0 param:(id)a1;
- (void)p_asyncFinalTrackJob:(id)a0 extDict:(id)a1;
- (void)p_asyncFinalTrackManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;

@end
