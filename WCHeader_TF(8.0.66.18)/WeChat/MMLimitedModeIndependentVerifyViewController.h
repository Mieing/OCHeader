@class NSString, MMUITextField, MMLimitedModeVerifyPasswordLogic, WCPayInputView, MMLimitedModeSetPasswordLogic, ForwardMessageLogicController, MMUIButton, MMUILabel;
@protocol MMLimitedModeIndependentVerifyViewControllerDelegate;

@interface MMLimitedModeIndependentVerifyViewController : MMUIViewController <UITextFieldDelegate, WCPayInputViewDelegate, MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeSetPasswordLogicDelegate, MMWebViewDelegate, ForwardMessageLogicDelegate> {
    double m_fKeyboardHeight;
    MMLimitedModeVerifyPasswordLogic *m_verifyPasswordLogic;
    MMLimitedModeSetPasswordLogic *m_setPasswordLogic;
    MMUIButton *m_payInputViewButton;
    BOOL m_isShowErrorTip;
}

@property (retain, nonatomic) MMUILabel *m_titleLabel;
@property (retain, nonatomic) MMUILabel *m_forgetPassWordLabel;
@property (retain, nonatomic) WCPayInputView *payInputView;
@property (retain, nonatomic) MMUITextField *m_textField;
@property (retain, nonatomic) MMUIButton *m_forgetPassWordButton;
@property (retain, nonatomic) MMUILabel *m_errorLabel;
@property (retain, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (weak, nonatomic) id<MMLimitedModeIndependentVerifyViewControllerDelegate> m_delegate;
@property (nonatomic) unsigned int m_verifyScene;
@property (nonatomic) long long scene;
@property (copy, nonatomic) id /* block */ m_closeBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)initData;
- (void)initUI;
- (void)updateUI;
- (double)getInputViewWidth;
- (id)getTextFieldText;
- (id)getTitleLabelText;
- (void)showErrorLabel:(id)a0 isShow:(BOOL)a1;
- (void)onBack;
- (void)onTextFieldContentChange:(id)a0;
- (void)doInputFinishAction;
- (void)onForgetPassWord;
- (void)_onOverseaForgetPassWord;
- (void)_onChinaForgetPassWord;
- (void)forwardPasswordResetMsg;
- (void)onPayInputViewButtonClick;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)inputView:(id)a0 didChangeText:(id)a1;
- (void)onVerifyPasswordRetTicket:(id)a0 needShowAlert:(BOOL)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void)onLimitedModeSetPasswordRetType:(unsigned int)a0 ticket:(id)a1 success:(BOOL)a2 errMsg:(id)a3;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void).cxx_destruct;

@end
