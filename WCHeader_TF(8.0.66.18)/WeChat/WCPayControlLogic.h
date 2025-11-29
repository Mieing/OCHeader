@class NSString, WCPayControlData;

@interface WCPayControlLogic : WCBizControlLogic <WCBaseControlMgrExt, WCPayLogicMgrExt, MMWebViewDelegate, WCPayBaseViewControllerRemoveDelegate> {
    WCPayControlData *m_data;
    NSString *m_nsErrorDetailUrl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)data;
- (id)init;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (id)getPayData;
- (void)pushViewController:(id)a0 data:(id)a1;
- (void)popViewControllerAndPush:(id)a0 data:(id)a1 animated:(BOOL)a2;
- (void)onNotifyResultProcessFinished;
- (void)addTopViewController:(id)a0;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (void)startTopVCLoadingNonBlocked;
- (void)stopTopVCLoadingNonBlocked;
- (void)handleRouteInfo:(id)a0;
- (void)onErrorAlertViewStopLogic:(id)a0;
- (void)onErrorAlertViewDismiss:(id)a0;
- (BOOL)onError:(id)a0;
- (void)showErrorTipsViewWithTitle:(id)a0 message:(id)a1 btnTitle:(id)a2 target:(id)a3 selector:(SEL)a4 errorDetailUrl:(id)a5 extInfo:(id)a6;
- (BOOL)onNeedToControlCurrentPublicError;
- (void)OnWCPayBaseRequestNoKnownError:(id)a0 TenPayCmdType:(unsigned int)a1;
- (void)onPayPasswordErrorAlertViewDismiss:(id)a0;
- (void)onAlertResetPwd:(id)a0;
- (void)OnPayPasswordError:(id)a0 ErrorCount:(int)a1 LockTotalCount:(unsigned int)a2;
- (void)OnPhoneNumberError:(id)a0;
- (void)OnCVVAndValidError:(id)a0;
- (void)OnCVVError:(id)a0;
- (void)OnValidError:(id)a0;
- (void)OnHandleSpecialPayError:(id)a0 ErrorType:(unsigned int)a1;
- (void)OnLimitInsufficientError:(id)a0 ErrorType:(unsigned int)a1;
- (void)OnAddCardBtnDonw;
- (void)OnAddCardError:(id)a0 ErrorType:(unsigned int)a1;
- (void)OnVerifyUserInfo;
- (void)OnAddCardToVerifyUserInfoError:(id)a0 ErrorType:(unsigned int)a1;
- (void)showPayOrderConfirmViewWithData:(id)a0 delegate:(id)a1;
- (void)OnWCBizBaseViewControllerDidBePoped:(id)a0;
- (void)onErrorDetailClick:(id)a0;
- (void)webViewReturn:(id)a0;
- (void)setPayChannel:(unsigned int)a0;
- (void)onRealnameActionClick:(id)a0;
- (void).cxx_destruct;

@end
