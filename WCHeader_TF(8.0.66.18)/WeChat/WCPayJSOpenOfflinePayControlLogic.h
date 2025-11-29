@class NSDictionary, NSString;
@protocol WCPayJSOpenOfflinePayControlLogicDelegate;

@interface WCPayJSOpenOfflinePayControlLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate, WCPayOfflineLogicDelegate>

@property (retain, nonatomic) NSDictionary *paramDict;
@property (weak, nonatomic) id<WCPayJSOpenOfflinePayControlLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSParam:(id)a0;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)walletLockVerifySuccess:(id)a0;
- (void)onOfflinePayLogicStop:(BOOL)a0;
- (void).cxx_destruct;

@end
