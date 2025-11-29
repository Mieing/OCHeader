@class WCUIAlertView, NSString, UITextField, WCPayDecimalKeyboardView, UIView, RichTextView, UIButton;
@protocol WCPayFacingReceiveFixedAmountViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountViewController : WCPayBaseViewController <WCPayDecimalKeyboardViewDelegate, ILinkEventExt> {
    id<WCPayFacingReceiveFixedAmountViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) NSString *remark;
@property (retain, nonatomic) NSString *moneyString;
@property (retain, nonatomic) UITextField *feeTextField;
@property (retain, nonatomic) RichTextView *commentTextView;
@property (retain, nonatomic) UIButton *footerBtn;
@property (retain, nonatomic) WCUIAlertView *alertView;
@property (retain, nonatomic) WCPayDecimalKeyboardView *keyboardView;
@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshViewWithData:(id)a0;
- (void)setDelegate:(id)a0;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidAppear:(BOOL)a0;
- (double)uintLabelFontSize:(id)a0;
- (double)currencyTextFieldFontSize:(id)a0;
- (void)initHeaderView;
- (void)FillSaveMoneyCancel;
- (void)onNext;
- (void)textFieldDidChange;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)remarkConfirm;
- (void)remarkCancel;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;

@end
