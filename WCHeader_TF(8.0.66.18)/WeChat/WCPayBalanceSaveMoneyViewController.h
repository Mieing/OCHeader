@class UIButton;
@protocol WCPayBalanceSaveMoneyViewControllerDelegate;

@interface WCPayBalanceSaveMoneyViewController : WCPayBaseViewController {
    id<WCPayBalanceSaveMoneyViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) UIButton *selectBtn;

- (id)init;
- (void)setDelegate:(id)a0;
- (void)OnHistoryOrderDetailBack;
- (void)internalPushViewController:(id)a0 animated:(BOOL)a1;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;

@end
