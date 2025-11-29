@class NSString, WCPayAddPayCardLogic;

@interface WCPayCreateOfflinePayLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, IWCPayControlLogicExt> {
    WCPayAddPayCardLogic *m_cardLogic;
}

@property (nonatomic) BOOL bHasHandleBindQueryResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)startGetUserData;
- (void)onNeedVerifyConfirm;
- (void)onNeedVerifyCancel;
- (void)EndCreateOfflinePayWithResponse:(id)a0;
- (void)justEndCreateOfflinePay:(BOOL)a0;
- (void)handleEnterOfflinePayAfterUpdateCard:(id)a0 error:(id)a1;
- (void)OnQueryOfflinePayLimit:(id)a0 fromCache:(BOOL)a1 Error:(id)a2;
- (void)enterOfflinePayInternal;
- (void)VerifyPayPwdNext:(id)a0;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)onErrorAlertViewDismiss:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnPreFinishedWCPayLogic:(id)a0 waitUntilDone:(BOOL *)a1;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (BOOL)isRegButNotRealnameUser;
- (void)showAddPayCardAlert;
- (void)OnCreateOfflinePayResponse:(id)a0 Error:(id)a1;
- (void)OnAddCardError:(id)a0 ErrorType:(unsigned int)a1;
- (void)OnAddCardBtnDonw:(id)a0;
- (void).cxx_destruct;

@end
