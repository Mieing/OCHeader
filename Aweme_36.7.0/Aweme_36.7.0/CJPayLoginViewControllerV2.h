@class CJPayDyPayProcessConfigModel, CJPayLoginBillView, CJPayButton, CJPayAccountInsuranceTipView, CJPayQueryLoginInfoResponse;

@interface CJPayLoginViewControllerV2 : CJPayFullPageBaseViewController

@property (retain, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (retain, nonatomic) CJPayButton *confirmButton;
@property (retain, nonatomic) CJPayLoginBillView *loginBillView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (nonatomic) BOOL requestSuccess;
@property (retain, nonatomic) CJPayQueryLoginInfoResponse *payQueryLoginInfoResponse;
@property (nonatomic) BOOL isRequestRetry;

- (BOOL)cjNeedAnimation;
- (id)initWithConfigModel:(id)a0 payQueryLoginInfoResponse:(id)a1;
- (void)startWithConfigModel:(id)a0 payQueryLoginInfoResponse:(id)a1;
- (void)p_startToRequestPageConfig;
- (void)p_reachabilityDidChange;
- (void)p_privacyAlertAgreed;
- (BOOL)p_isSignOnlyServiceProduct;
- (BOOL)p_isCreditServiceProduct;
- (void)p_login;
- (void)p_confirmClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)back;

@end
