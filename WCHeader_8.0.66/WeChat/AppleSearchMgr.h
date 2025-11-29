@class NSString, MMUIViewController;

@interface AppleSearchMgr : MMUserService <MMUIViewControllerDelegate, WCPayWalletLockVerifyLogicDelegate, MMKernelExt, MMServiceProtocol> {
    BOOL m_hasIndexSearch;
    MMUIViewController *m_moreVc;
    unsigned int m_patternLockLogicTag;
}

@property (retain, nonatomic) NSString *featureNotHandledOnLaunch;
@property (nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)openQuickPayOnVc:(id)a0;
- (void)openQuickPay;
- (void)openFeature:(id)a0;
- (id)openShake:(long long)a0 isSupported:(BOOL)a1 currentVc:(id)a2;
- (id)genFeatureSearchItem:(id)a0 title:(id)a1 keywords:(id)a2;
- (void)indexActivities;
- (void)handleUnprocessedFeatureOnLaunch;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (id)getViewController;
- (void)walletLockVerifySuccess:(id)a0;
- (void).cxx_destruct;

@end
