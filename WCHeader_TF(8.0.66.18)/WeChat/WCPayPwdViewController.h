@class GetHbRefundConfigResp, NSString, WCPayGetTransferWordingCgi, MMWebViewController, NSDictionary, WCPayTransferPhoneGetSwitchCgi, TransferPhoneGetSwitchResp, WCPayTransferPhoneProtocalHalfPage, WCPayHongBaoRefundConfigCgi, WCPayTransferPhoneChangeSwitchCgi, GetTransferWordingResponse;
@protocol WCPayPwdViewControllerDelegate;

@interface WCPayPwdViewController : WCPayBaseViewController <WCPayVoidCallbackDelegate, WCPayTransferPhoneChangeSwitchCgiDelegate, WCPayTransferPhoneGetSwitchCgiDelegate, IUpdateProfileMgrExt, WCPayGetTransferWordingCgiDelegate, MMWebViewDelegate, WCPayOpenTouchIDAuthLogicDelegate, WCPayLogicMgrExt, SetWCPayWebLogicStateExt, WCPayHongBaoRefundConfigCgiDelegate, ILinkEventExt, WCPayTransferPhoneProtocalHalfPageDelegate>

@property (retain, nonatomic) NSDictionary *payManageData;
@property (retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi;
@property (retain, nonatomic) GetTransferWordingResponse *wordingResponse;
@property (retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi;
@property (retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp;
@property (retain) WCPayTransferPhoneGetSwitchCgi *transferPhoneGetSwitchCgi;
@property (retain) WCPayTransferPhoneChangeSwitchCgi *transferPhoneChangeSwitchCgi;
@property (retain) TransferPhoneGetSwitchResp *transferPhoneGetSwitchResp;
@property (retain) MMWebViewController *uploadIdWebView;
@property (retain) WCPayTransferPhoneProtocalHalfPage *protocolHalfPage;
@property BOOL shouldUpdateWhenAppear;
@property BOOL isAgreedWithProtocol;
@property (nonatomic) unsigned int m_fromScene;
@property (weak, nonatomic) id<WCPayPwdViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateExtraSection:(id)a0 dic:(id)a1 delegate:(id)a2;
+ (id)decoratorViewWith:(id)a0 header:(BOOL)a1 width:(double)a2 delegate:(id)a3;

- (void)dealloc;
- (id)init;
- (void)OnBack;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLoad;
- (void)requestTransferPhoneConfig;
- (void)requestHbRefundConfig;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)a0;
- (void)OnHongBaoRefundConfigRepsonseError:(id)a0 errorCode:(unsigned int)a1;
- (void)viewDidBePushed:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)initCellView;
- (void)managePlanData;
- (void)onChangeHongBaoRefundPayWay;
- (void)onSwitchWallet:(id)a0;
- (void)onPayManageLabelToWeb:(id)a0;
- (id)delayDurationDesc;
- (void)requestWording;
- (void)onTouchIDSwitchChanged:(id)a0;
- (void)onSimpleUserSetPwd;
- (void)onModifyPwd;
- (void)onResetPwd;
- (void)onChangeDelayTransferDuration;
- (void)unregisterWCPay;
- (void)reloadTable;
- (void)onProfileChange;
- (void)updatePayManageData;
- (void)initPayManageDataFromCacheOrNetwork;
- (void)reloadTableFromCache;
- (void)gotoPayManage:(id)a0;
- (void)onRealname;
- (void)onRealnameVerifySuccess;
- (void)wcpayGetTransferWordingCgi:(id)a0 didGetResponse:(id)a1;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)setWCPayWebLogicStateJsapi:(id)a0 didGetInfo:(id)a1;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayTransferPhoneGetSwitchCgiResp:(id)a0;
- (void)onWCPayTransferPhoneGetSwitchCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onTransferPhoneSwitch:(id)a0;
- (id)genTransferPhoneSectionFooterView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onWCPayTransferPhoneChangeSwitchCgiResp:(id)a0;
- (void)onWCPayTransferPhoneChangeSwitchCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)setDelegate:(id)a0;
- (void)webViewReturn:(id)a0;
- (void)onWCPayVoidCallbackWithUserInfo:(id)a0;
- (void)WCPayTransferPhoneProtocalHalfPageAgree;
- (void)WCPayTransferPhoneProtocalHalfPageDisagree;
- (void).cxx_destruct;

@end
