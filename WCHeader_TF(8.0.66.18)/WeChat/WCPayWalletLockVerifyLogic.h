@class NSString, WCPayWalletLockReportCgi;
@protocol WCPayWalletLockVerifyLogicDelegate;

@interface WCPayWalletLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, WCPayTouchLockVerifyLogicDelegate>

@property (nonatomic) unsigned int patternLockLogicTag;
@property (retain, nonatomic) WCPayWalletLockReportCgi *walletLockReportCgi;
@property (nonatomic) unsigned long long verifyScene;
@property (weak, nonatomic) id<WCPayWalletLockVerifyLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)startKindaTouchLockVerify;
- (void)startKindaPatternLockVerify;
- (void)reportTryToUnlockWalletLock:(BOOL)a0;
- (void)reportUnlockWalletLockSuccess:(BOOL)a0;
- (BOOL)isInValidDuration;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockErrorOutOfLimit;
- (void)touchLockVerifySuccess:(id)a0;
- (BOOL)needBlockUntilVerified:(id)a0;
- (void)onPatternLockToPwdVerifyCancel;
- (void)onPatternLockToPwdVerifyResult:(BOOL)a0;
- (void)onPatternLockVerifyResult:(BOOL)a0;
- (void)touchLockVerifyCancel:(id)a0;
- (void)reportTouchLockVerifyResult:(BOOL)a0;
- (void)reportTouchLockToPwdVerifyResult:(BOOL)a0;
- (void)reportTouchLockToPwdVerifyCancel;
- (void)realtimeReportWalletLock:(unsigned long long)a0 verifyType:(unsigned long long)a1 isVerifySuccess:(BOOL)a2 failReason:(unsigned long long)a3;
- (void).cxx_destruct;

@end
