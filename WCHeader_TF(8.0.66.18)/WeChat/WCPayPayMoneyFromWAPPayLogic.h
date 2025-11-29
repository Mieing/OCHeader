@class WCPayBaseViewController, NSString, NSDictionary, WCPayPayMoneyFromOverseaH5WalletLogic, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromWAPPayLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate> {
    NSDictionary *m_payInfo;
    NSString *m_bundleId;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancelByOpenApi;
- (void)markCancelByOpenApi;
- (id)initWithInfo:(id)a0 BundleID:(id)a1;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)gotoViewController:(id)a0;
- (void)OnRootViewBack;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnGetAppAuthUrlRequest:(id)a0 AppSource:(id)a1 PrepayId:(id)a2 CallBackUrl:(id)a3 WalletMixSpGenprepayResp:(id)a4 Error:(id)a5;
- (void)OnGetAppAuthUrlErrorRequest:(id)a0;
- (void)succToPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void)failToPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void)cancelPayMoneyFromOverseaH5WalletLogic:(id)a0;
- (void).cxx_destruct;

@end
