@class AWESearchHomeNewStyleVoiceInputPanelViewConfig, AWESearchVoiceInputViewModel, LOTAnimationView, NSString, UIView, NSDictionary, AWESearchHomeNewStyleVoiceInputPanelView;
@protocol AWESearchHomeNewStyleVoiceInputProtocol;

@interface AWESearchHomeNewStyleVoiceInputManager : NSObject <AWESearchHomeNewStyleVoiceInputProtocol, AWEInnerNotificationMessage, AWESearchVoiceInputProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWESearchHomeNewStyleVoiceInputPanelView *panelView;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL notiBarPullDown;
@property (nonatomic) BOOL hasMicroPhoneAuth;
@property (nonatomic) BOOL isPressing;
@property (nonatomic) unsigned long long lastGestureState;
@property (retain, nonatomic) AWESearchVoiceInputViewModel *voiceInputViewModel;
@property (retain, nonatomic) LOTAnimationView *voiceFlashLottieView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSDictionary *voiceAsrExtra;
@property (retain, nonatomic) AWESearchHomeNewStyleVoiceInputPanelViewConfig *panelConfig;
@property (weak, nonatomic) id<AWESearchHomeNewStyleVoiceInputProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recoverAudioSession;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)appWillResignActiveNotification:(id)a0;
- (void)innerNotificationDidDisplay:(id)a0;
- (void)innerNotificationDidTap:(id)a0;
- (void)bindActions;
- (void)impactFeedback;
- (void)processInterrupted;
- (void)phoneScreenDidLock:(id)a0;
- (void)handleIMPushTopViewTap:(id)a0;
- (void)voiceInputStateMicrophoneAuthWindowShow;
- (void)voiceInputStateMicrophoneAuthStatus:(BOOL)a0;
- (void)voiceInputStateWillSetupHandlerWithVosId:(id)a0;
- (void)voiceInputStateInputTimeoutRemindWithCountdown:(long long)a0;
- (void)voiceInputStateInputTimeout;
- (void)voiceInputStateASRDisconnected;
- (void)voiceInputStateASRFailed;
- (void)voiceInputStateASRTranslate:(id)a0 isInterIM:(BOOL)a1 isSoftFinished:(BOOL)a2 vosDuration:(long long)a3 searchExtra:(id)a4;
- (void)voiceInputStateASRFinished:(id)a0;
- (void)voiceInputStateAveragePowerDidChange:(float)a0;
- (void)dismissVoiceInputPanelView:(BOOL)a0;
- (void)showVoiceInputPanelView;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)setupNotifications;

@end
