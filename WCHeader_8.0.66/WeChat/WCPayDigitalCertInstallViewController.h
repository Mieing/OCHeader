@class WCBizLoadingView, WCPayTenpaySecureCtrlItem, WCPayUserInfo, NSString, WCPayGenDigitalCertCgi, UIButton;
@protocol WCPayDigitalCertInstallViewControllerDelegate;

@interface WCPayDigitalCertInstallViewController : WCPayBaseViewController <WCPayLogicMgrExt, WCPayGenDigitalCertCgiDelegate>

@property (retain, nonatomic) UIButton *m_verifyButton;
@property (nonatomic) double verifyBtnY;
@property (retain, nonatomic) WCPayTenpaySecureCtrlItem *m_idNoTextFieldItem;
@property (retain, nonatomic) WCBizLoadingView *m_bizLoadingView;
@property (retain, nonatomic) WCPayGenDigitalCertCgi *m_genDigitalCgi;
@property (retain, nonatomic) WCPayUserInfo *m_userInfo;
@property (weak, nonatomic) id<WCPayDigitalCertInstallViewControllerDelegate> m_delegate;
@property (nonatomic) int cert_encrypt_type;
@property (nonatomic) unsigned int entryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0 userInfo:(id)a1 certEncryptType:(int)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)updateBizLoadingView;
- (void)startBizLoadingBlocked;
- (void)stopBizLoading;
- (void)showKeyboard;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)reloadTableView;
- (void)updateHeaderView;
- (void)updateVerifyButton;
- (void)updateTextFieldItem;
- (void)onClickVerifyButton;
- (void)updateVerifyButtonStatus;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)tapFooterView;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;

@end
