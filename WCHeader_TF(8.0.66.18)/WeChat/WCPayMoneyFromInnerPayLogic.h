@class NSString, WCPayPayMoneyLogic, WCPayInnerPayRequestStruct;

@interface WCPayMoneyFromInnerPayLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate> {
    WCPayPayMoneyLogic *m_payLogic;
    WCPayInnerPayRequestStruct *m_oWCPayInnerPayRequestStruct;
    NSString *m_dicExtraInfo;
    NSString *m_nsRequestKey;
    unsigned int m_eSene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInnerPayRequest:(id)a0;
- (id)initWithInnerPayRequest:(id)a0 Scene:(long long)a1;
- (id)initWithInnerPayParam:(id)a0;
- (id)initWithInnerPayRequest:(id)a0 extraInfo:(id)a1;
- (void)startLogic;
- (void)stopLogic;
- (id)getInnerPayResponseStruct;
- (BOOL)gotoViewController:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnGetGenPaypreRequest:(id)a0 SessionID:(id)a1 AppSource:(id)a2 WalletMixSpGenprepayResp:(id)a3;
- (void)OnGetGenPaypreErrorRequest:(id)a0 ErrorMsg:(id)a1;
- (void).cxx_destruct;

@end
