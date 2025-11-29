@class UIButton, NSString, AFDRecentlyRemovedRecommendDataController, AWEUILoadingView, NSMutableArray, UITableView;

@interface AFDRecentlyRemovedRecommendViewController : UIViewController <AFDRecentlyRemovedRecommendDelegate, DUXAlertDialogDelegate, UITableViewDelegate, UITableViewDataSource, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AFDRecentlyRemovedRecommendDataController *dataController;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) NSMutableArray *impressionUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)unfollowUser:(id)a0;
- (void)loadMoreData;
- (void)didTapFollowButtonOnCell:(id)a0;
- (void)setupNavUI;
- (void)updateClearButtonStatus;
- (void)clearAllUsers;
- (void)trackClearAllUsersWithEvent:(id)a0;
- (void)refreshUserFollowStatusWithUserID:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (void)endRefreshing;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupTableView;
- (void)showLoadingView;
- (void)reloadTableView;
- (void)hideLoadingView;
- (void)clearButtonTapped:(id)a0;

@end
