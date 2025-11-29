@class NSString, WCPayControlData, MMWebViewController, WCPayJumpRemindControlLogic, WCRedEnvelopesReportCgi, NSDictionary, WCPayPayMoneyLogic, WCRedEnvelopes2022HKGreetingViewController, WCRedEnvelopes2019GreetingViewController;

@interface WCRedEnvelopesGreetingControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2019GreetingViewControllerDelegate, WCRedEnvelopes2022HKGreetingViewControllerDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCRedEnvelopesReportCgiDelegate, MMUseCaseCallback, WCBaseControlMgrExt, IWCPayControlLogicExt, WCRedEnvelopesLogicMgrExt> {
    WCPayControlData *m_oPayData;
    WCPayPayMoneyLogic *m_oPayMoneyLogic;
    WCRedEnvelopes2019GreetingViewController *m_sendView;
    WCRedEnvelopes2022HKGreetingViewController *m_sendViewHK;
    BOOL _isViewAnimationing;
}

@property (retain, nonatomic) WCRedEnvelopesReportCgi *reportWxhbCgi;
@property (nonatomic) long long lastUnpayReason;
@property (retain, nonatomic) NSDictionary *lastReqKeyStruct;
@property (retain, nonatomic) WCPayJumpRemindControlLogic *jumpRemindLogic;
@property (retain, nonatomic) NSString *unqiueId;
@property (retain, nonatomic) MMWebViewController *h5RedEnvPrepayWebUI;
@property (retain, nonatomic) NSString *reportSessionId;
@property (nonatomic) unsigned long long m_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)dealloc;
- (void)showSendingView:(BOOL)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)onPayMoneyLogicDidStop;
- (void)onRemoveSendView;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (BOOL)gotoViewController:(id)a0;
- (void)OnGenGreetingDownloadResult:(id)a0;
- (void)OnQueryRedEnvelopesUserInfo:(id)a0 isCahceInfo:(BOOL)a1 Error:(id)a2;
- (void)OnGenRedEnvelopesPayRequest:(id)a0 Error:(id)a1;
- (void)OnContinueGenRedEnvelopesPayRequest:(id)a0 Error:(id)a1;
- (void)OnGenH5RedEnvelopesPayRequest:(id)a0 Error:(id)a1;
- (void)onGetH5PayNativeCashierResult:(BOOL)a0;
- (void)onWebViewWillClose:(id)a0;
- (void)webViewReturn:(id)a0;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (void)redEnvelopes2019GreetingViewControllerSendClick:(id)a0;
- (void)genGreeetingReportSessonId;
- (id)getGreetingReportSessionId;
- (void)redEnvelopes2022HKGreetingViewControllerBack;
- (void)redEnvelopes2022HKGreetingViewControllerSendClick:(id)a0;
- (BOOL)isGreetingKindaEnable;
- (void)startGreetingKindaPay;
- (void)call:(id)a0;
- (void)callPaySuccWithTransId:(id)a0 fromWalletMix:(BOOL)a1;
- (void)handleGreetingRedEnvPaySuccessWithTransid:(id)a0 fromWalletMix:(BOOL)a1;
- (void)callPayFail;
- (void)sendReportHBRequestWithFailReason:(int)a0;
- (void).cxx_destruct;

@end
