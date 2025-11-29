@class WCTableViewManager, NSString, FinderNewUserPrepareResponse;

@interface WCFinderAccountSettingViewController : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) NSString *currentFinderUsername;
@property (retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse;

- (id)initWithUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)reloadTableView;
- (void)clickCell:(id)a0 indexPath:(id)a1;
- (void)showMiniProgramWithAcctConfig:(id)a0;
- (void)openWebWithURLString:(id)a0;
- (void).cxx_destruct;

@end
