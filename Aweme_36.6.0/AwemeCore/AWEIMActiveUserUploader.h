@class NSTimer, NSString;
@protocol IESIMHttpTask;

@interface AWEIMActiveUserUploader : NSObject <AWEUserMessage, AWEIMActiveUserUploader> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSTimer *activeTimer;
@property (nonatomic) BOOL notFirstFire;
@property (nonatomic) long long fireDenyCount;
@property (nonatomic) double lastUpdateTime;
@property (copy, nonatomic) id /* block */ resumeBlock;
@property (retain, nonatomic) id<IESIMHttpTask> prevTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)applicationDidEnterBackgroundNoti:(id)a0;
- (void)applicationWillEnterForegroundNoti:(id)a0;
- (double)getLastUpdateTime;
- (void)resetTimerWithUpdateTime:(double)a0 context:(id)a1;
- (void)p_resumeUserActiveStatusWithEntrance:(id)a0 delay:(double)a1 context:(id)a2;
- (void)cancelPrevTask;
- (double)p_getServerCurrentTime;
- (BOOL)checkEnableServerUploadActiveStatus;
- (void)p_updateUserActiveWithContext:(id)a0;
- (void)setUpTimerWithContext:(id)a0;
- (void)updateUserActiveStatusWithEntrance:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)cleanTimer;
- (void)dealloc;

@end
