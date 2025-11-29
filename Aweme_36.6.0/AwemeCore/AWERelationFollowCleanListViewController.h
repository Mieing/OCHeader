@class AWERelationFollowCleanListView, NSString, AWERelationFollowCleanListViewModel, AWEUILoadingView, UITableView;

@interface AWERelationFollowCleanListViewController : UIViewController <AWEViewControllerProtocol, AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWERelationFollowCleanListView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long recCleanNum;
@property (retain, nonatomic) AWERelationFollowCleanListViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)setupBinding;
- (void)fetchData:(BOOL)a0;
- (void)__setupNavUI;
- (void)__setupTableView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
