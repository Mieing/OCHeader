@class NSString, NSDictionary, CJPayOrderConfirmResponse, CJPayEvent, UIViewController;
@protocol CJPayVerifySMSVCProtocol;

@interface CJPayVerifyItemSMS : CJPayVerifyItem

@property (copy, nonatomic) NSString *inputContent;
@property (weak, nonatomic) UIViewController<CJPayVerifySMSVCProtocol> *smsVc;
@property (retain, nonatomic) UIViewController<CJPayVerifySMSVCProtocol> *secondaryVerifySMSVC;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (retain, nonatomic) CJPayEvent *payEvent;
@property (nonatomic) BOOL isSMSBaseVerifyType;
@property (retain, nonatomic) UIViewController<CJPayVerifySMSVCProtocol> *verifySMSVC;
@property (copy, nonatomic) NSString *payFlowNo;
@property (copy, nonatomic) CJPayOrderConfirmResponse *confirmResponse;

- (id)checkType;
- (void)handleVerifyResponse:(id)a0;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (void)p_voucherSwell:(id)a0;
- (BOOL)shouldUseHalfScreenVC;
- (void)p_requestVerifyItem;
- (void)p_verifyAuthWithVerifyInfo:(id)a0;
- (id)_buildHelpModel:(id)a0;
- (void)p_setShowKeyBoard:(id)a0;
- (void)p_verifyByRecogFaceWithVerifyInfo:(id)a0;
- (void)p_confirmPayWithAuthTokenDict:(id)a0;
- (void)p_voucherSwellAttrExpansion:(id)a0;
- (id)createVerifySMSVC;
- (BOOL)p_isSwitchToSMSEvent;
- (BOOL)p_isSwitchFromPrehub;
- (id)p_buildVerifySource;
- (void)p_otherVerifyButtonAction:(long long)a0;
- (void)p_buildSecondarySMSVC;
- (void)p_buildSMSVC;
- (void)_verifySMS;
- (BOOL)p_cancelRetainWindow;
- (void)smsVcCloseAction:(id)a0;
- (BOOL)shouldShowRetainVCWithSMSVC:(id)a0;
- (void)_requestVerifyWith:(id)a0;
- (void)p_handleRetainVoucherWithData:(id)a0;
- (BOOL)p_lynxRetain:(id)a0 withSMSVC:(id)a1;
- (void)smsVCCloseCallBack;
- (void)p_switchPasswordVerifyWithSource:(id)a0;
- (void)p_switchBioVerifyWithSource:(id)a0;
- (void)p_switchNopwdVerifyWithSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
