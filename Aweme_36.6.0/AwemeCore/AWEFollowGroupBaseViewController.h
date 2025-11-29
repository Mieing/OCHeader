@class NSString, AWEFollowGroupViewModel, AWEUILoadingView, NSMutableArray, UITableView;

@interface AWEFollowGroupBaseViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEFollowGroupViewModel *viewModel;
@property (nonatomic) long long groupType;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSMutableArray *trackShowArray;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *followGroupType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)_endRefreshing;
- (void)_setViewModel;
- (void)updateOneGroupName:(id)a0 newName:(id)a1;
- (void)_setupNavUI;
- (void)_setupTableViewUI;
- (BOOL)shouldHideNoMoreText;
- (void)showToastWithError:(id)a0;
- (void)_fetchDataSuccess;
- (void)_emptyButtonClicked;
- (void)insertOneGroup:(id)a0 groupName:(id)a1;
- (void)deleteOneGroup:(id)a0;
- (void)updateOneGroupMemberInfo:(id)a0;
- (void)_loadMoreData;
- (void)_refreshData;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithGroupType:(long long)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)showLoadingView;
- (void)refreshData;
- (double)footerInset;
- (void)_setupUI;
- (void)hideLoadingView;

@end
