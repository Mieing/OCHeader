@class NSString;

@interface WCPaySDKOpenOfflinePayControlLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate, WCPayOfflineLogicDelegate>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL bIsSuccOpenOfflinePay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppId:(id)a0 bundleId:(id)a1;
- (void)startLogic;
- (void)walletLockVerifySuccess:(id)a0;
- (void)walletLockVerifyCancel:(id)a0;
- (void)onOfflinePayLogicStop:(BOOL)a0;
- (void)stopLogic;
- (void).cxx_destruct;

@end
