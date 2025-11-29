@class UIView, DYLoginNextActionButton, NSArray, NSString, DYRouterModel, NSObject, DYLoginInputView, UILabel;
@protocol AWEUserLoginUILayoutConfig;

@interface AWEUserCreatePasswordViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *passwordErrorTipLabel;
@property (retain, nonatomic) UILabel *confirmPasswordErrorTipLabel;
@property (retain, nonatomic) DYLoginInputView *passwordInputView;
@property (retain, nonatomic) DYLoginInputView *confirmPasswordInputView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *notificationObservers;
@property (nonatomic) BOOL shouldHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL isFirstHandleTransformForKeyboardCovering;
@property (nonatomic) BOOL shouldRecoverChange;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *enterFrom;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)inLoginProcedure;
- (BOOL)isBusinessAccount;
- (void)skipAction;
- (void)p_setupNavigationBar;
- (void)finishLogin;
- (void)handleKeyboardAnimationWithShow:(BOOL)a0 userInfo:(id)a1;
- (void)resetNextButtonStatus;
- (void)handlePasswordErrorMessage:(id)a0;
- (void)handleConfirmPasswordErrorMessage:(id)a0;
- (void)trackPassportSubPasswordSettingEvent:(id)a0 clickType:(id)a1 result:(id)a2 error:(id)a3;
- (void)p_setupNormalStyle;
- (void)requestResetPassword;
- (void)inputPasswordSubmit;
- (BOOL)checkPassword;
- (void)nextAction:(id)a0;
- (void)p_setupUI;
- (void)backAction;
- (void).cxx_destruct;
- (id)titleText;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)subTitleText;
- (void)viewDidLoad;
- (void)dealloc;

@end
