@class WCPayT2BCDetailControlLogic, JSEvent, WCPayJumpHbRefundJsapiLogic, WCPayJSApiAuthenticationControlLogic, WCPayT2BCTransferControlLogic, NSString, WCPayOverseaFacingReceiveControlLogic, WCPayLQTDetailControlLogic, WCPayLQTDepositControlLogic, WCPayLQTMoneyControlLogic, WCPayF2FJSApiAuthenticationControlLogic, WCPayJumpC2CMessageJsapiLogic, WCPayBalanceFetchMoneyControlLogic, WCPayF2FReceiveDetailControlLogic;

@interface WCPayJSApiOpenWCPayViewControl : WCPayControlLogic <WCPayLQTMoneyControlLogicDelegate, WCPaySecuritySettingViewControllerDelegate, WCPayLQTDetailControlLogicDelegate, HoneyPayHomeControlLogicDelegate, HoneyPayPayerDetailControlLogicDelegate, HoneyPayReceiverCardDetailControlLogicDelegate, MMUseCaseCallback, WCBaseControlMgrExt> {
    JSEvent *m_jsEvent;
    WCPayJSApiAuthenticationControlLogic *m_oAuthenticationLogic;
    long long m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
}

@property (retain, nonatomic) WCPayF2FJSApiAuthenticationControlLogic *f2fJSApiAuthenControlLogic;
@property (retain, nonatomic) WCPayF2FReceiveDetailControlLogic *f2fDetailControlLogic;
@property (retain, nonatomic) WCPayLQTDetailControlLogic *lqtDetailControlLogic;
@property (retain, nonatomic) WCPayT2BCDetailControlLogic *t2bcDetailControlLogic;
@property (retain, nonatomic) WCPayBalanceFetchMoneyControlLogic *fetchBanlanceControlLogic;
@property (retain, nonatomic) WCPayT2BCTransferControlLogic *t2bcTransferControlLogic;
@property (retain, nonatomic) WCPayJumpC2CMessageJsapiLogic *m_jumpC2CMessageJsapiLogic;
@property (retain, nonatomic) WCPayLQTDepositControlLogic *lqtDepositControlLogic;
@property (retain, nonatomic) WCPayLQTMoneyControlLogic *lqtMoneyControlLogic;
@property (retain, nonatomic) WCPayJumpHbRefundJsapiLogic *hbRefundControlLogic;
@property (retain, nonatomic) WCPayOverseaFacingReceiveControlLogic *overseaFacingReceiveControlLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0;
- (void)startLogic;
- (void)call:(id)a0;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (id)packageParam;
- (void)callJSEventOKAndReport;
- (void)onLQTDetailControlLogicStop;
- (void)honeyPayHomeLogicDidStop:(id)a0;
- (void)onWCPaySecuritySettingViewControllerBack;
- (void)onLQTMoneyControlLogicStop:(BOOL)a0;
- (void)syncLqtVersion:(id)a0;
- (void).cxx_destruct;

@end
