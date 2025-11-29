@class NSString, WCPayPayMoneyFromOverseaH5WalletLogic, JSEvent, WCPayPayMoneyLogic;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate> {
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
    NSString *m_funcName;
}

@property BOOL cancelByUser;
@property (weak, nonatomic) id<WCPayPayJSApiLogicParamDelegate> paramDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 URL:(id)a1 BrandUserName:(id)a2;
- (void)setExtraInfo:(id)a0;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)startLogic;
- (id)callbackStr:(id)a0;
- (void)stopLogic;
- (BOOL)isOpenPayStautsABTest;
- (void)reportJSPayCallbackWithPayType:(int)a0 callbackType:(int)a1 sourceH5:(id)a2 sourceAppUsername:(id)a3 sourceAppPath:(id)a4 targetAppUsername:(id)a5 targetAppPath:(id)a6;
- (BOOL)gotoViewController:(id)a0;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnGetGenPaypreRequest:(id)a0 SessionID:(id)a1 AppSource:(id)a2 WalletMixSpGenprepayResp:(id)a3;
- (void)OnGetGenPaypreErrorRequest:(id)a0 ErrorMsg:(id)a1;
- (void)onWCPayJSApiResult:(id)a0 needCloseWebview:(BOOL)a1;
- (void)onWCPayJSApiNeedOpenTinyApp:(id)a0 path:(id)a1;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void).cxx_destruct;

@end
