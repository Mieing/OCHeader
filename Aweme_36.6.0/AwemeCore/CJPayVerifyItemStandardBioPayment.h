@class CJPayBDBioConfirmViewController, CJPayEvent;

@interface CJPayVerifyItemStandardBioPayment : CJPayVerifyItem

@property (weak, nonatomic) CJPayBDBioConfirmViewController *confirmVC;
@property (nonatomic) BOOL disableSwitchToPasswordInVerifying;
@property (nonatomic) BOOL isNeedLoading;
@property (nonatomic) BOOL isOpenBioSuccess;
@property (retain, nonatomic) CJPayEvent *event;

- (id)checkType;
- (void)p_closeAction;
- (void)handleVerifyResponse:(id)a0;
- (id)getLatestCacheData;
- (void)requestVerifyWithCreateOrderResponse:(id)a0 event:(id)a1;
- (BOOL)shouldHandleVerifyResponse:(id)a0;
- (id)checkTypeName;
- (id)p_toastTextForBioVerifyFailed;
- (id)p_buildBioPaymentOneTimePWD:(id)a0;
- (unsigned long long)p_bioPaymentAction;
- (void)p_lockoutSwitchToPasswordShowTopRightButtonWithResponse:(id)a0;
- (void)setConfirmButtonEnableStatus:(BOOL)a0;
- (void)bioPayWithResponse:(id)a0 model:(id)a1 localizedReason:(id)a2 isSkipPwdSelected:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_trackShowTopRightButtonWithBioEvent:(unsigned long long)a0;
- (void)p_verifyingSwitchToPassword:(id)a0 event:(id)a1 clickType:(unsigned long long)a2;
- (id)p_payName;
- (void)p_switchToPassiveVerifyWithResponse:(id)a0 passiveType:(id)a1 reason:(id)a2;
- (void)p_openBioAndPay:(id)a0;
- (void)p_showOpenBioAndPayPopUpWindow:(id)a0;
- (void)p_handleCloseActionWithRedoBlock:(id /* block */)a0;
- (id)buildDowngradeSwitchEventWithReason:(id)a0 isActive:(BOOL)a1;
- (void)downgradeAndSwitchVerifyType:(id)a0 event:(id)a1;
- (void)p_openBiopayment:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)p_defaultSwitchVerifyType;
- (id)p_toastTextForBioVerifyInBack;
- (id)buildSwitchEventForOptWithData:(id)a0;
- (BOOL)p_shouldShowRetainVCWithRedoBlock:(id /* block */)a0;
- (BOOL)p_lynxRetain:(id)a0 sourceVC:(id)a1 redoBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;

@end
