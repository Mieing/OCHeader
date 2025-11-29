@class MMUILabel, WCUITextField, NSString, PasswordLogic, UIView, UIButton;

@interface MMVerifyPasswordViewController : MMUIViewController <PasswordLogicDelegate, UITextFieldDelegate, MMAcceptAgreementResultViewControllerDelegate>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCUITextField *passwordTextField;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (retain, nonatomic) UIButton *forgotButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (copy, nonatomic) id /* block */ successCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (retain, nonatomic) PasswordLogic *passwordLogic;
@property (nonatomic) BOOL isShowErrorTip;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL autoCloseWhenVerifySuccessed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSuccess:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)viewDidLoad;
- (void)configNavigationBarButton;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)initUI;
- (void)onBack;
- (void)onConfirmPassword;
- (void)onForgetPassword;
- (void)clickAtBackground;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onTextFieldContentChange:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)verifyPasswordError:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)onClickMakeSureActionWithViewController:(id)a0;
- (void)onVerifyPasswordSuccess:(id)a0;
- (void)onVerifyPasswordFail;
- (void)onVerifyPasswordCancel;
- (void).cxx_destruct;

@end
