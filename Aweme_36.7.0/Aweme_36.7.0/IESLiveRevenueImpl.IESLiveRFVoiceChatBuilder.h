@class _TtC18IESLiveRevenueImpl23IESLiveRFVoiceChatModel;

@interface IESLiveRevenueImpl.IESLiveRFVoiceChatBuilder : NSObject <IESLiveRevenueImpl.IESLiveRFVoiceChatTracker, IESLiveRevenueImpl.IESLiveRFVoiceChatVCLifeCycle, IESLiveFormatGiftAtomicModuleDelegate, IESLiveRevenueImpl.IESLiveRFVoiceChatProvider> {
    void /* unknown type, empty encoding */ authorID;
    void /* unknown type, empty encoding */ commonTrackParams;
    void /* unknown type, empty encoding */ voiceChatAPI;
    void /* unknown type, empty encoding */ rtcClient;
    void /* unknown type, empty encoding */ aiStateManager;
    void /* unknown type, empty encoding */ countDownTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_giftService;
    void /* unknown type, empty encoding */ timeoutTimer;
    void /* unknown type, empty encoding */ pauseState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ruleURL;
    void /* unknown type, empty encoding */ traceID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userID;
    void /* unknown type, empty encoding */ aiUserID;
    void /* unknown type, empty encoding */ enterTime;
    void /* unknown type, empty encoding */ haveCalled;
    void /* unknown type, empty encoding */ startTime;
}

@property (nonatomic, retain) _TtC18IESLiveRevenueImpl23IESLiveRFVoiceChatModel *model;
@property (nonatomic) BOOL isMute;
@property (nonatomic) long long state;
@property (nonatomic) double remainTimePercent;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)logInfo:(id)a0 params:(id)a1;
- (void)monitor:(id)a0 params:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)popUpContainer;
- (void)animationStartPlay:(id)a0 assetId:(long long)a1;
- (void)animationEndPlay:(id)a0 assetId:(long long)a1;
- (id)animationContainer;
- (BOOL)isInVoiceChat;
- (void)forceQuitVoiceChat;
- (void)reloadWithAuthorID:(long long)a0 trackParams:(id)a1;
- (void)startVoiceChat;
- (long long)getCurrentAIState;
- (void)muteAudioCapture:(BOOL)a0;
- (void)stopVoiceChatWithReason:(long long)a0;
- (void)openRulePage;
- (void)interrupt;
- (void)reset;
- (void)didSetAttachingDIContext;
- (void)willAppResignActive;
- (void)didAppBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
