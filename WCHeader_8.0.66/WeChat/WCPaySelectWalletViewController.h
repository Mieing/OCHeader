@protocol WCPaySelectWalletViewControllerDelegate;

@interface WCPaySelectWalletViewController : WCPayBaseViewController {
    id<WCPaySelectWalletViewControllerDelegate> m_delegate;
}

- (id)init;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)refreshViewWithData:(id)a0;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)OnBack;
- (void)setDelegate:(id)a0;
- (void)makeWalletInfoCell:(id)a0 cellInfo:(id)a1;
- (void)selectWalletInfo:(id)a0;
- (void).cxx_destruct;

@end
