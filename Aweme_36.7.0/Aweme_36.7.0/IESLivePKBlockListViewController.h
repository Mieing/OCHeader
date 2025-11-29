@class NSString, UIImageView, IESLivePKBlockListViewModel, IESLiveEmptyView, UITableView;

@interface IESLivePKBlockListViewController : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate>

@property (nonatomic) long long blockType;
@property (retain, nonatomic) IESLivePKBlockListViewModel *viewModel;
@property (copy, nonatomic) NSString *navBarName;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) UIImageView *assistImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEmptyView;
- (void)bindAction;
- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (void)onSetupNavBar:(id)a0;
- (id)initWithDIContext:(id)a0 blockType:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupViews;

@end
