@class NSString, NSMutableSet, LaunchImage, NSMutableArray, PreEnterShowGlobalAlertStep;

@interface PreEnterWechatLogic : NSObject <MMKernelExt, PreEnterStepDelegate, IUiUtilExt, INewSyncExt, IMsgExt> {
    BOOL m_bCalledPreEnterWechatDone;
    BOOL m_bRunning;
    NSMutableArray *m_nsArrSteps;
    PreEnterShowGlobalAlertStep *m_GlobalAlert;
    LaunchImage *m_launchImage;
    BOOL m_hasShownPrivacy;
    BOOL m_hasShownWCOpenService;
    BOOL m_hasShowLimitedModeEntry;
    NSMutableSet *m_hasShownPolicyListSet;
}

@property (nonatomic) BOOL hasCallLocalMsgText;
@property (retain, nonatomic) NSMutableSet *hasShownStepIdSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)LocalMsgTest;

- (void)goNext;
- (id)init;
- (void)startSteps:(id)a0 FromReg:(BOOL)a1;
- (void)addStepIfNotExist:(id)a0;
- (void)addStep:(id)a0;
- (void)addStep:(id)a0 withType:(id)a1;
- (void)checkStartSteps;
- (void)dealloc;
- (BOOL)checkHasShownWithType:(id)a0 stepId:(id)a1;
- (void)setHasShownWithType:(id)a0 stepId:(id)a1;
- (void)onPreEnterStepDone:(id)a0;
- (void)handleSuspend;
- (void)onTimeChange;
- (void)checkTimeChange;
- (void)enterForeground;
- (void)firstBecomeActive;
- (void)callPreEnterWechatDone;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)fixContactPlugin;
- (void)restoreContactDraft;
- (void)clearLaunchImages;
- (void)preLoadContacts;
- (void)checkUpdateNewVersionTip:(BOOL)a0;
- (void)checkUpdateTabbarBadgeNum;
- (void)delayLoadAndCheck;
- (void)onGetUpdateInfoOk;
- (void)onMainControllStart;
- (void)onNewSyncFinish;
- (void).cxx_destruct;

@end
