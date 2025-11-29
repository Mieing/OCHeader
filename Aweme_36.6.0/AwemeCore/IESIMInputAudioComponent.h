@class UILongPressGestureRecognizer, NSString, UIVisualEffectView, UIView, AWEIMInputVCBadgeButton;
@protocol AWEIMAudioInputTouchViewProtocol, AWEIMAudioRecordControllerProtocol;

@interface IESIMInputAudioComponent : AWEIMComponentBase <IESIMInputAudioComponentInterface, UIGestureRecognizerDelegate, AWEIMAudioRecordControllerDelegate, IESIMInputStateChangedActionProtocol, IESIMInputThemeChangedAction, IESIMInputLayoutAction>

@property (retain, nonatomic) AWEIMInputVCBadgeButton *audioBtn;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIVisualEffectView *audioInputViewBlurView;
@property (retain, nonatomic) UILongPressGestureRecognizer *audioBtnLongPressGes;
@property (retain, nonatomic) id<AWEIMAudioRecordControllerProtocol> audioRecordController;
@property (retain, nonatomic) UIView<AWEIMAudioInputTouchViewProtocol> *audioInputView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)stopRecord;
- (void)cancelRecord;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)recorderAnimationing;
- (void)setupAudioViewColorWithDarkUI:(BOOL)a0;
- (void)audioBtnClicked:(id)a0;
- (void)didRecordViewTouchDown;
- (void)handleLongPressGes:(id)a0;
- (id)audioView;
- (void)didSendVoiceTextMessage:(id)a0;
- (BOOL)shouldDisableSendWhileAIReplyingWithToast:(BOOL)a0;
- (void)audioBtnLongPressed:(id)a0;
- (void)didSendVoiceMessage;
- (void)didSendFormatVoiceTextMessage:(id)a0;
- (void)updateAudioInputViewBlurViewIfExit:(BOOL)a0;
- (void)audioBtnPressed;
- (void)p_setAudioInputViewUIStyleWithBlur;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutAfterButtonAdjustWithWidth:(double)a0 left:(double)a1 leftButtons:(id)a2 rightButtons:(id)a3;
- (void)triggerLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputBarHeight:(double)a1 animated:(BOOL)a2 refreshContext:(id)a3;
- (void).cxx_destruct;

@end
