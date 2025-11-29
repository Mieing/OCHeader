@class UITableView, NSString, UIView, UILabel, AWEIMOnlinePrivacyDataManager;

@interface AWEIMOnlinePrivacyFriendsListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMOnlinePrivacyDataManager *manager;
@property (retain, nonatomic) UIView *emptyPageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *informativeLabel;
@property (copy, nonatomic) id /* block */ selectedListChangedBlock;
@property (copy, nonatomic) id /* block */ resignKeyboard;
@property (copy, nonatomic) id /* block */ showTopSearchView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEmptyPage:(BOOL)a0;
- (void)p_createTableView;
- (void)p_initEmptyView;
- (void)emptyPageTapped;
- (id)p_userAtIndexPath:(id)a0;
- (void)reloadTableViewAfterSelectUser:(id)a0 isSelected:(BOOL)a1 needReload:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithManager:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)reloadTableView;

@end
