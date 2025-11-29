@protocol WCPayCreditPayIncreaseLimitSucViewControllerDelegate;

@interface WCPayCreditPayIncreaseLimitSucViewController : WCPayBaseViewController {
    id<WCPayCreditPayIncreaseLimitSucViewControllerDelegate> m_delegate;
}

- (id)init;
- (void)setDelegate:(id)a0;
- (void)onBack;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)initHeaderView;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
