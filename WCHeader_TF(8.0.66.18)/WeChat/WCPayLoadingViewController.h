@class WCBizLoadingView;
@protocol WCPayLoadingViewControllerDelegate;

@interface WCPayLoadingViewController : WCPayBaseViewController {
    WCBizLoadingView *m_loadView;
}

@property (weak, nonatomic) id<WCPayLoadingViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)onReturn;
- (void)didReceiveMemoryWarning;
- (void)viewDidPush:(BOOL)a0;
- (void)showWebViewControllerWithURL:(id)a0 animated:(BOOL)a1;
- (void)getWalletUrl;
- (void)didFail;
- (void)showErrorAlert;
- (void).cxx_destruct;

@end
