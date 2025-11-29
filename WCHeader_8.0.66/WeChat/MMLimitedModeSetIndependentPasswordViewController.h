@class MMUITextField, WCPayInputView, NSString, MMUIButton, MMUILabel;

@interface MMLimitedModeSetIndependentPasswordViewController : MMUIViewController <UITextFieldDelegate, WCPayInputViewDelegate> {
    double m_fKeyboardHeight;
}

@property (retain, nonatomic) MMUILabel *m_titleLabel;
@property (retain, nonatomic) MMUILabel *m_descLabel;
@property (retain, nonatomic) WCPayInputView *payInputView;
@property (retain, nonatomic) MMUITextField *m_textField;
@property (retain, nonatomic) MMUIButton *m_goToWechatPassWordButton;
@property (nonatomic) BOOL isShowErrorTip;
@property (nonatomic) unsigned int m_setLimitedModePwdType;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int m_verifyScene;
@property (nonatomic) BOOL showRepeatWrongTips;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)initUI;
- (id)getTitleLabelText;
- (id)getDescLabelText;
- (double)getInputViewWidth;
- (id)getTextFieldText;
- (BOOL)isShowGoToWechatPassWordButton;
- (BOOL)isShowDesclabel;
- (void)onBack;
- (void)onTextFieldContentChange:(id)a0;
- (void)doInputFinishAction;
- (void)onGoToWechatPassWord;
- (void)onPayInputViewButtonClick;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)inputView:(id)a0 didChangeText:(id)a1;
- (void).cxx_destruct;

@end
