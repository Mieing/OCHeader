@class WCPayBaseViewController, NSString, NSDictionary, PayResp, WCPayPayMoneyLogic, WCPayPayMoneyFromOverseaH5WalletLogic;

@interface WCPayPayMoneyFromAppLogic : WCPayControlLogic <WCPayBaseViewControllerDelegate, WCBaseControlMgrExt, WCPayPayMoneyFromOverseaH5WalletLogicDelegate> {
    NSDictionary *m_payInfo;
    NSString *m_appID;
    NSString *m_bundleId;
    NSString *m_universalLink;
    PayResp *m_resp;
    WCPayPayMoneyLogic *m_payLogic;
    WCPayBaseViewController *rootViewController;
    WCPayPayMoneyFromOverseaH5WalletLogic *m_payMoneyFromOverseaH5WalletLogic;
}

@property (nonatomic) BOOL m_cancelByOpenApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 BundleID:(id)a1 appID:(id)a2 universalLink:(id)a3;
- (void)markCancelByOpenApi;
- (void)WCPayBaseViewControllerBack;
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
