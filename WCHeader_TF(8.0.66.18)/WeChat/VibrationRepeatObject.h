@class NSString, NSTimer, NotMainQueueTimer, NSLock;

@interface VibrationRepeatObject : NSObject <NotMainQueueTimerDelegate>

@property (retain, nonatomic) NSTimer *m_inAppTimer;
@property (retain, nonatomic) NotMainQueueTimer *m_outAppTimer;
@property (nonatomic) int m_outAppVibrationCount;
@property (nonatomic) BOOL m_hasHoldBackgroundTask;
@property (retain, nonatomic) NSLock *m_backgroundTaskLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)repeatInAppVibration;
- (void)repeatOutAppVibration;
- (void)stopInAppVibration;
- (void)stopOutAppVibration;
- (void)dealloc;
- (void)callInAppVibration;
- (void)callOutAppVibration;
- (void)onNotMainQueueTimerCallback;
- (void)holdBackgroundTask;
- (void)releaseBackgroundTask;
- (void).cxx_destruct;

@end
