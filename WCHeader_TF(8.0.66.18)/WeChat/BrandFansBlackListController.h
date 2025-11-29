@class NSString, MMLoadMoreTableView, BrandFansBlackListViewModel, UILabel, NSMutableArray;

@interface BrandFansBlackListController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMLoadMoreTableViewDelegate>

@property (retain, nonatomic) BrandFansBlackListViewModel *viewModel;
@property (retain, nonatomic) MMLoadMoreTableView *tableView;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (retain, nonatomic) UILabel *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)loadData;
- (void)showErrorView;
- (void)reloadData;
- (void)showEmptyView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void).cxx_destruct;

@end
