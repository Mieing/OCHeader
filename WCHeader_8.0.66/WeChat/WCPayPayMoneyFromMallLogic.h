@class NSString, WCPayMallPayStruct, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromMallLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, MMUseCaseCallback> {
    WCPayMallPayStruct *m_oWCPayMallPayStruct;
    WCPayPayMoneyLogic *m_payLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWCPayMallPayStruct:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (BOOL)gotoViewController:(id)a0;
- (void)OnGetMallPrepayRequest:(id)a0 AppSource:(id)a1 Error:(id)a2;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
