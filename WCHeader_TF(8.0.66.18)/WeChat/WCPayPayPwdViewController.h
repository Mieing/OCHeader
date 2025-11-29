@class NSString, UIButton, WCPayPwdCtrlPanelView;
@protocol WCPayPayPwdViewControllerDelegate;

@interface WCPayPayPwdViewController : WCPayBaseViewController {
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id<WCPayPayPwdViewControllerDelegate> m_delegate;
}

@property (nonatomic) long long vcTag;
@property (nonatomic) long long pwdEncryptMode;
@property (retain, nonatomic) NSString *pwdNonce;

- (void)setTitle:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)init;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)initNavigationBar;
- (void)leftBarButtonClick;
- (void)showViewWithCurrentView:(id)a0 NextView:(id)a1;
- (void)showVerifyPwdCtrlWithTitle:(id)a0 Tip:(id)a1 withShowFooterButton:(BOOL)a2;
- (void)setPwdCtrlPasswordTextFieldEncryptModeAndNonce:(id)a0;
- (void)showVerifyPwdCtrlWithTitle:(id)a0 Tip:(id)a1;
- (void)showSetPwdCtrlWithTitle:(id)a0 WithTip:(id)a1;
- (void)showSetPwdCtrlWithTitle:(id)a0 Tip:(id)a1 fromError:(BOOL)a2;
- (void)showSecondPwdCtrlWithTitle:(id)a0 Tip:(id)a1 withShowFooterButton:(BOOL)a2;
- (void)setFooterBtnTitle:(id)a0;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)clearPwdInput;
- (void)resignInputViewFirstResponse;
- (void)becomeInputViewFirstResponse;
- (void)setNavigationBarTitle:(id)a0 Stype:(unsigned long long)a1;
- (void).cxx_destruct;

@end
