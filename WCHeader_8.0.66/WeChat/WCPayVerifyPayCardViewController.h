@class WCBaseKeyboardToolBar, NSString, UIImageView, WCPaySMSCodeItem, UILabel, RichTextView, UIButton;
@protocol WCPayVerifyPayCardViewControllerDelegate;

@interface WCPayVerifyPayCardViewController : WCPayBaseViewController <ILinkEventExt> {
    UIButton *m_footerButton;
    WCPaySMSCodeItem *m_textFieldItem;
    UIButton *m_sendVerifyCodeBtn;
    UILabel *m_sendVerifyCodeLabel;
    long long m_iCountDown;
    NSString *m_nsHeaderTip;
    NSString *m_nsHeaderTipForCustom;
    RichTextView *richTextView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id<WCPayVerifyPayCardViewControllerDelegate> m_delegate;
    BOOL bShowedModifyBtn;
}

@property (retain, nonatomic) UIImageView *m_iconView;
@property (retain, nonatomic) UILabel *m_iconDescLabel;
@property (retain, nonatomic) UILabel *m_contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)needShowDigitalVersionView;
- (void)viewDidLayoutSubviews;
- (void)setHeaderTip:(id)a0;
- (void)reloadTableView;
- (void)updateIconViewWithSuperView:(id)a0;
- (void)updateIconDescLabelWithSuperView:(id)a0;
- (void)reloadTableWithDigitalLayout;
- (void)reloadTableWithVerifyLayout;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)initFooterView;
- (void)stopTimer;
- (void)startTimer;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)initSendVerifyCodeButton;
- (void)initNavigationBar;
- (void)showNotSMSTipBtn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)autoInputVerifyCode:(id)a0;
- (void)showModifyPhoneBtn;
- (void)setFooterBtnTitle:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setHeaderTipForCustom:(id)a0;
- (void)showNotAnyOneSMSTipBtn;
- (void)onSendVerifyCodeClicked:(id)a0;
- (void)onConfirmSendVerifyCodeAgain;
- (void)OnSendButtonCancel;
- (void)OnSendButtonModify;
- (void)OnModifyPhoneBtn;
- (unsigned int)alertScene;
- (void)onAlertModifyPhone;
- (void)updateSendVerifyCodeButton;
- (void)onNext;
- (void)onOpenQA;
- (id)phoneNumber;
- (void).cxx_destruct;

@end
