@class NSString;
@protocol WCPayCloseWalletLockCgiDelegate;

@interface WCPayCloseWalletLockCgi : WCPayBaseTenPayCgi <WCPayLogicMgrExt>

@property (copy, nonatomic) NSString *password;
@property (weak, nonatomic) id<WCPayCloseWalletLockCgiDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)OnVerifyPayPassword:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
