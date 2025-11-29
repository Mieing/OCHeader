@class AWEDouPlusCouponListEmptyView, NSString, AWEDouPlusCouponListViewModel, UILabel, UITableView;

@interface AWEDouPlusCouponListViewController : AWEDouPlusContainerViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEDouPlusCouponListEmptyView *emptyView;
@property (retain, nonatomic) AWEDouPlusCouponListViewModel *viewModel;
@property (nonatomic) long long originSeletedIndex;
@property (nonatomic) BOOL isConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissFromParentViewController;
- (void)setupNavigationBarActionHandler;
- (void)handleSelectedCouponModel:(id)a0;
- (void)updateHeaderLabel;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
