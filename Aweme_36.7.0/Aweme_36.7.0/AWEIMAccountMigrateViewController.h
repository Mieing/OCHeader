@class AWEIMDYNotificationListDataController, NSString, UITableView;

@interface AWEIMAccountMigrateViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMAccountMigrateCellDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMDYNotificationListDataController *dataController;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long notificaitonType;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL showNav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)p_loadMoreData;
- (void)p_fetchData;
- (void)p_endRefreshing;
- (void)accountMigrateCell:(id)a0 clickText:(id)a1;
- (void)p_clearLocalUnreadCount;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)footerInset;

@end
