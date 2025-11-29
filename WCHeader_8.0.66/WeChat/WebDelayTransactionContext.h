@class MMWebViewController, MMWebViewKeepHolderMgr;

@interface WebDelayTransactionContext : MMObject

@property (retain, nonatomic) MMWebViewController *webViewVC;
@property (weak, nonatomic) MMWebViewKeepHolderMgr *webKeeper;

- (void).cxx_destruct;

@end
