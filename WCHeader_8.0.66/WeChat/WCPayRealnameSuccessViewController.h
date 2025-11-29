@class MMWebViewController, NSString;
@protocol WCPayRealnameSuccessViewControllerDelegate;

@interface WCPayRealnameSuccessViewController : WCPayBaseViewController <WCPayRealnameSuccessViewDelegate, MMWebViewDelegate>

@property (weak) id<WCPayRealnameSuccessViewControllerDelegate> m_delegate;
@property (retain, nonatomic) MMWebViewController *uploadIdWebVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (void)setDelegate:(id)a0;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePresented:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)onWCPayRealnameSuccessViewDone;
- (void)onWCPayRealnameSuccessViewRetry;
- (void)onWCPayRealnameSuccessViewNeedCloseAndOpenUrl:(id)a0;
- (void)onWCPayRealnameSuccessViewOpenUrl:(id)a0;
- (void)onWCPayRealnameSuccessViewOpenTinyapp:(id)a0 path:(id)a1;
- (void)webViewReturn:(id)a0;
- (void).cxx_destruct;

@end
