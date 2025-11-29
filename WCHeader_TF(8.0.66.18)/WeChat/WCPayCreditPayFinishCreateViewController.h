@protocol WCPayCreditPayFinishCreateViewControllerDelegate;

@interface WCPayCreditPayFinishCreateViewController : WCPayBaseViewController {
    id<WCPayCreditPayFinishCreateViewControllerDelegate> m_delegate;
}

- (id)init;
- (void)initNavigationBar;
- (void)viewWillLayoutSubviews;
- (void)initHeaderView;
- (void)initFooterView;
- (void)viewDidLoad;
- (void)setDelegate:(id)a0;
- (void)onBack;
- (void)onIncreaseLimit;
- (void).cxx_destruct;

@end
