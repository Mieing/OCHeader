@class NSString;

@interface WCPayHtml5WalletLogic : WCPayControlLogic <WCPayLoadingViewControllerDelegate, MMWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)showLoadingViewController;
- (void)showWebViewControllerWithURL:(id)a0 animated:(BOOL)a1;
- (void)getWalletUrl;
- (void)didFail;
- (void)showErrorAlert;
- (void)webViewReturn:(id)a0;
- (void)loadingViewControllerDidBack:(id)a0;

@end
