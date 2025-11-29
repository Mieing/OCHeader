@class UIView, DYLoginNextActionButton, DYPhoneNumberModel, DYVerificationCodeInputView, NSArray, DYRouterModel, NSTimer, AWELoginButton, DYUserProtocolView, NSObject, NSString, UILabel;
@protocol AWEUserLoginUILayoutConfig;

@interface DYFindPasswordViewController : UIViewController <UIGestureRecognizerDelegate, AWETuringMessage>

@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) DYVerificationCodeInputView *codeInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) AWELoginButton *voiceButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *notificationObservers;
@property (retain, nonatomic) UILabel *naviLabel;
@property (nonatomic) BOOL shouldHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstSendMessage;
@property (nonatomic) BOOL isFirstSendVoiceMessage;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long curCountDown;
@property (nonatomic) BOOL isNewAccout;
@property (nonatomic) BOOL shouldRecoverChange;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceCommonAdapterClass;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)backAction:(id)a0;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)p_setupNavigationBar;
- (void)countDownAction:(id)a0;
- (void)dismissKeyboard:(id)a0;
- (id)aAWEUserModuleServiceCommonAdapter;
- (id)p_trackInfo;
- (void)handleKeyboardAnimationWithShow:(BOOL)a0 userInfo:(id)a1;
- (void)resetNextButtonStatus;
- (void)p_setupNormalStyle;
- (void)nextAction:(id)a0;
- (void)setCountDownAndTimer:(long long)a0 max:(long long)a1;
- (void)handleErrorMessage:(id)a0;
- (void)sendSMSCodeAction:(id)a0;
- (void)showVoiceButton;
- (void)sendVoiceCodeAction:(id)a0;
- (void)codeInputFinish;
- (void)sendVoiceCode:(BOOL)a0;
- (void)sendSMSCode;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
