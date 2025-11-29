@class NSString, AWEUITextLoadingView, UIView, UITableView;

@interface AWEInteractNoticeConfigManager : NSObject

@property (retain, nonatomic) UIView *naviBarLoadingView;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL shouldTrackDiffCacheAndServer;

- (void)refreshNoticeWithOldDataSource:(id)a0 newDataSource:(id)a1;
- (void)showLoadingViewAtNavigationBar:(id)a0 withRightMargin:(double)a1;
- (void)hiddenLoadingView;
- (void)_updateDiffTableViewWithOldDataSource:(id)a0 newDataSource:(id)a1;
- (void)trackDiffDatasourceWithDeleteCount:(long long)a0 insertCount:(long long)a1 updateCount:(long long)a2;
- (void)showLoadingViewAtNaviBar:(id)a0;
- (void).cxx_destruct;

@end
