@class QryHoneyPayCardDetailResp;
@protocol HoneyPayReceiverCardDetailViewControllerDelegate;

@interface HoneyPayReceiverCardDetailViewController : HoneyPayBaseViewController

@property (retain, nonatomic) QryHoneyPayCardDetailResp *detail;
@property (weak, nonatomic) id<HoneyPayReceiverCardDetailViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)refreshViewWithData:(id)a0;
- (void)setupNavigationBar;
- (void)reloadTableView;
- (id)headerView;
- (void)onRightBarButtonClick;
- (void)didClickUnbind;
- (long long)overrideUserInterfaceStyle;
- (void).cxx_destruct;

@end
