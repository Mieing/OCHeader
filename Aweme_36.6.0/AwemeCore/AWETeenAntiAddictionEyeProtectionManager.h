@class UILabel, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, AWETeenEyeProtectionDelegate;

@interface AWETeenAntiAddictionEyeProtectionManager : NSObject <AWEDigitalWellbeingMessage, AWETeenEyeProtectLockMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double lastTimeStamp;
@property (nonatomic) double userDuration;
@property (nonatomic) BOOL isTimerValid;
@property (nonatomic) BOOL notShowWhenvideoWithinFiveMinutes;
@property (nonatomic) BOOL enableShow;
@property (retain, nonatomic) UILabel *durationLabel;
@property (weak, nonatomic) id<AWETeenEyeProtectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timerInterval;
+ (double)maxUserDuration;
+ (id)sharedManager;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)unlockPageDidDismiss;
- (void)pauseTimerIfNeeded;
- (void)p_cancelTimer;
- (void)setEyeProtectionEnableShow:(BOOL)a0;
- (void)triggerShowEyeProtectLockIfNeeded;
- (BOOL)shouldShowEyeProtectionLock;
- (void)eyeProtectSettingDidChanged:(BOOL)a0;
- (void)checkEyeProtectionLockTimerStatus;
- (void)applicationEnterBackgroundNotification:(id)a0;
- (void)p_addTask;
- (BOOL)p_eyeProtectionEnable;
- (void)scheduleDispatchTimer;
- (BOOL)enableEyeProtectionTimerCheck;
- (BOOL)enableEyeProtectController;
- (void)clearTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startTimerIfNeeded;

@end
