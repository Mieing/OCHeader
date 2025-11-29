@class WCTableViewManager;

@interface WCFinderInteractiveInformationViewController : MMUIViewController

@property (retain, nonatomic) WCTableViewManager *tableViewManager;

- (void)viewDidLoad;
- (void)setup;
- (void)reloadTableView;
- (void)onClickFollowList;
- (void)onClickLikeList;
- (void)onClickFavList;
- (void)onClickNotificationList;
- (void)onClickPrivateMsgList;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
