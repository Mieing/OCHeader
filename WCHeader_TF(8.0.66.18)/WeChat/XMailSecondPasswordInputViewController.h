@class WCUITextField, NSString, UIScrollView, UILabel, UIButton;

@interface XMailSecondPasswordInputViewController : MMUIViewController <UITextFieldDelegate> {
    UIScrollView *m_scrollView;
    UILabel *m_errorInfoLabel;
    WCUITextField *m_pwdTextField;
    UIButton *m_confirmBtn;
}

@property (retain, nonatomic) NSString *mailAddr;
@property (copy, nonatomic) id /* block */ onClickConfirmBlock;
@property (copy, nonatomic) id /* block */ onViewControllerQuitBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)onShowPasswordError;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidChange:(id)a0;
- (void)onReturn;
- (void)onClickConfirmBtn:(id)a0;
- (void).cxx_destruct;

@end
