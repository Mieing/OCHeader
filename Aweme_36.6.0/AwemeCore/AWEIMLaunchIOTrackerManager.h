@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMLaunchIOTrackerManager : HTSService <AWEUserMessage, AWEIMLaunchIOTrackerService>

@property BOOL isTracking;
@property (retain, nonatomic) NSMutableDictionary *targets;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
@property (nonatomic) BOOL isLowPowerMode;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long firstInterval;
@property (nonatomic) unsigned long long loopInterval;
@property BOOL hasEnterMessageTab;
@property BOOL isFirstLogin;
@property BOOL isSwitchAccount;
@property long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)didFinishLoginWithUid:(id)a0;
- (void)p_clearTimer;
- (void)beginTrace;
- (void)dbMark:(id)a0 launchTime:(float)a1;
- (void)dbMark:(id)a0 launchTime:(float)a1 cmdID:(int)a2;
- (void)fileMark:(id)a0 launchTime:(float)a1;
- (void)dbMark:(id)a0 beginTime:(unsigned long long)a1;
- (void)fileMark:(id)a0 beginTime:(unsigned long long)a1;
- (void)markEnterMessageTab;
- (void)markFirstLogin;
- (BOOL)shouldTrackLaunchIO;
- (float)durationFromBeginTime:(unsigned long long)a0;
- (void)p_trackWithParams:(id)a0;
- (void)onPowerStateDidChange:(id)a0;
- (void)p_beginTrace;
- (void)p_trackAllTargets;
- (id)p_targetWithID:(id)a0;
- (float)p_durationFromBeginTime:(unsigned long long *)a0;
- (void).cxx_destruct;
- (unsigned long long)beginTime;
- (void)dealloc;

@end
