@class NSString, LiteAppDynamicModuleCallback;

@interface WalletAreaChangeImpl : NSObject <WCPayLogicMgrExt, MMUseCaseCallback>

@property (nonatomic) long long walletAreaChangeInvokeScene;
@property (retain, nonatomic) NSString *succLiteappInfo;
@property (retain, nonatomic) LiteAppDynamicModuleCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeWalletAreaFromMainlandToHK:(id)a0 resultCallback:(id)a1;
- (void)OnSetUserWallet:(id)a0;
- (void)ChangeUserWalletUnknownFail;
- (void)OnWCPayBaseRequestNoKnownError:(id)a0 TenPayCmdType:(unsigned int)a1;
- (void)OnWalletAreaChangeNotifyWithRet:(BOOL)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
