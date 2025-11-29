@class NSString, UIButton, WCPayTenpaySecureCtrlItem;
@protocol WCPayResetPwdBindCardViewControllerDelegate;

@interface WCPayResetPwdBindCardViewController : WCPayBaseViewController <MMWebViewDelegate> {
    UIButton *m_footerButton;
    WCPayTenpaySecureCtrlItem *m_textFieldItem;
    id<WCPayResetPwdBindCardViewControllerDelegate> m_delegate;
    BOOL bPoped;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidBePoped:(BOOL)a0;
- (void)OnWCPayResetPwdBindCardBack;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)setDelegate:(id)a0;
- (void)onNext;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)showDetailTip;
- (void)changeRealName;
- (void)webViewReturn:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void).cxx_destruct;

@end
