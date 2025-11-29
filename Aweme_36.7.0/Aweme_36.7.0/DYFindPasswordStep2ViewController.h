@class UIView, DYLoginNextActionButton, NSArray, DYPhoneNumberModel, NSString, DYRouterModel, DYASecurityTicketModel, NSObject, UIViewController, DYLoginInputView, UILabel;
@protocol AWEUserLoginUILayoutConfig;

@interface DYFindPasswordStep2ViewController : UIViewController <UIGestureRecognizerDelegate, AWETuringMessage>

@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *errorTipLabel;
@property (retain, nonatomic) DYLoginInputView *passwordInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *notificationObservers;
@property (retain, nonatomic) UILabel *naviLabel;
@property (nonatomic) BOOL shouldHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstSendMessage;
@property (nonatomic) BOOL isFirstSendVoiceMessage;
@property (nonatomic) long long curCountDown;
@property (nonatomic) BOOL shouldRecoverChange;
@property (nonatomic) BOOL hasAppear;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL sessionExpired;
@property (copy, nonatomic) NSString *secUid;
@property (retain, nonatomic) DYASecurityTicketModel *verifyTicket;
@property (retain, nonatomic) UIViewController *targetViewController;
@property (nonatomic) BOOL isBusinessAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)backAction:(id)a0;
- (void)securityCheckDidStart:(long long)a0;
- (void)securityCheckDidEnd:(long long)a0;
- (void)p_setupNavigationBar;
- (void)dismissKeyboard:(id)a0;
- (void)handleKeyboardAnimationWithShow:(BOOL)a0 userInfo:(id)a1;
- (void)resetNextButtonStatus;
- (void)inputPasswordSubmit;
- (void)nextAction:(id)a0;
- (void)handleErrorMessage:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
