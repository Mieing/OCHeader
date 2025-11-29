@class WCTableViewManager;

@interface WCFinderWCTableViewManagerVC : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)onBuildTables;
- (void).cxx_destruct;

@end
