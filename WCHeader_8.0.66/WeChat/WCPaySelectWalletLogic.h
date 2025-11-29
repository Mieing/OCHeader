@class WCPayWalletInfo, NSString, WCPaySelectWalletViewController, JSEvent;

@interface WCPaySelectWalletLogic : WCPayControlLogic <WCPaySelectWalletViewControllerDelegate> {
    WCPaySelectWalletViewController *selectWalletViewController;
    WCPayWalletInfo *selectedWallet;
    JSEvent *m_jsEvent;
}

@property (nonatomic) unsigned int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)initWithJSEvent:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)OnSelectWalletBack;
- (void)OnSelectWallet:(id)a0;
- (void)OnQueryUserWallet:(id)a0 Error:(id)a1;
- (void)OnSetUserWallet:(id)a0;
- (void).cxx_destruct;

@end
