@class NSString;

@interface WCPayOfflinePayShareCardLogic : WCPayControlLogic <WCPayWalletLockVerifyLogicDelegate> {
    int _patternLockLogicTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)walletLockVerifySuccess:(id)a0;
- (void)walletLockVerifyCancel:(id)a0;

@end
