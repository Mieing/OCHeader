@class NSString, NSTimer;
@protocol AWEHPCombineAutoTriggerCenterDelegate;

@interface AWEHPCombineAutoTriggerCenter : NSObject <AWEUserMessage>

@property (weak, nonatomic) id<AWEHPCombineAutoTriggerCenterDelegate> delegate;
@property (nonatomic) BOOL isLoad;
@property (nonatomic) BOOL hasAgreed;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *currentUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)p_addNotifications;
- (void)p_removeNotifications;
- (void)p_invalidateTimer;
- (id)p_getNetworkDeviceID;
- (void)p_tryUpdateTimeWithSubscriber:(id)a0;
- (void)p_updateTimerInterval:(long long)a0;
- (void)p_tryCallDelegateWithScene:(long long)a0;
- (void)handleAccountPrivacyPolicyAgreeNotification;
- (void)handleNetworkCommonParamsDeviceIDDidChangeNotification;
- (void)p_timerTrigger;
- (void)triggerColdLaunch;
- (void).cxx_destruct;
- (void)resetTimer;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)appWillEnterForeground:(id)a0;

@end
