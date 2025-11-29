@class UIView, NSString, AWESearchVoiceInputViewModel, UIButton, AWESearchAIGCVoiceInputPanelView, AWESearchAIGCVoiceInputContext, LOTAnimationView, UILabel;
@protocol AWESearchAIGCVoiceInputEntranceDelegate;

@interface AWESearchAIGCVoiceInputEntranceView : UIView <AWESearchVoiceInputProtocol, AWEInnerNotificationMessage>

@property (retain, nonatomic) UIView *gestureResponseView;
@property (retain, nonatomic) UIButton *keyboardButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchAIGCVoiceInputPanelView *panelView;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL notiBarPullDown;
@property (nonatomic) BOOL hasMicroPhoneAuth;
@property (nonatomic) BOOL isPressing;
@property (nonatomic) unsigned long long lastGestureState;
@property (retain, nonatomic) AWESearchVoiceInputViewModel *voiceInputViewModel;
@property (retain, nonatomic) AWESearchAIGCVoiceInputContext *context;
@property (retain, nonatomic) LOTAnimationView *voiceFlashLottieView;
@property (weak, nonatomic) id<AWESearchAIGCVoiceInputEntranceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)appWillResignActiveNotification:(id)a0;
- (void)innerNotificationDidDisplay:(id)a0;
- (void)innerNotificationDidTap:(id)a0;
- (void)p_setupNotifications;
- (void)p_bindActions;
- (id)inputPanelView;
- (void)handleLongPressAction:(id)a0;
- (void)showFlashAnimation;
- (void)updateGestureResponseViewMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateGestureResponseViewLeftOffset:(double)a0;
- (void)updateKeyboardRightOffset:(double)a0;
- (BOOL)inputV2Enabled;
- (void)p_dismissVoiceInputPanelView;
- (void)p_impactFeedback;
- (void)p_showVoiceInputPanelView;
- (void)processInterrupted;
- (void)phoneScreenDidLock:(id)a0;
- (void)handleIMPushTopViewTap:(id)a0;
- (void)keyboardButtonAction;
- (id)panelParentView;
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
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)colorNamed:(id)a0;
- (void)createUI;

@end
