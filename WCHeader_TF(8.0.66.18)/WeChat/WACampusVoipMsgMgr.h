@class WXLocalNotificationInfo, RingBackSoundCoordinator, WACampusVoipMsg, VibrationRepeatObject, NSString, WACampusVoipNotiView;

@interface WACampusVoipMsgMgr : MMUserService <WCAudioModuleDelegate, MonoServiceLogicExt, MMImageLoaderObserver, MMServiceProtocol, IMsgExt>

@property (retain, nonatomic) WACampusVoipMsg *currentMsg;
@property (retain, nonatomic) WXLocalNotificationInfo *currentLocalNotificationInfo;
@property (retain, nonatomic) WACampusVoipNotiView *notiView;
@property (retain, nonatomic) RingBackSoundCoordinator *ringCoordinator;
@property (retain, nonatomic) VibrationRepeatObject *vibrationPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onNewVoipMsg:(id)a0;
- (void)onNewVoipIn:(id)a0 isFromApns:(BOOL)a1;
- (void)onVoipCancel:(id)a0;
- (void)onVoipBusy:(id)a0;
- (void)onFinishVoipNoti;
- (void)onTimeout:(id)a0;
- (void)showIntentTypeNotification:(id)a0 withMsg:(id)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)showInAppNotification:(id)a0;
- (void)dismissInAppNotification;
- (void)showNewCallLocalNotification:(id)a0;
- (void)cancelLocalNotification;
- (void)openWeApp:(id)a0 path:(id)a1 debugMode:(unsigned long long)a2;
- (void)playRing;
- (void)stopPlayRing;
- (void)playEndingSound;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)onMonoServiceVoipWillStart;
- (void)onAppEnterForeground;
- (void).cxx_destruct;

@end
