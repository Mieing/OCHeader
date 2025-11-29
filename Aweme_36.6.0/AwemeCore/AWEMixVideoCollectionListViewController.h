@class UIView, NSString, AWEMixVideoCollectionListContext, DUXBasicSheet, AWEUILoadingView, UITableView, AWEMixVideoCollectionListViewModel, AWEMixVideoListBackgroundView;

@interface AWEMixVideoCollectionListViewController : UIViewController <DUXSheetDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingContainer;
@property (retain, nonatomic) AWEMixVideoCollectionListViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEMixVideoListBackgroundView *backgroundView;
@property (retain, nonatomic) AWEMixVideoCollectionListContext *context;
@property (weak, nonatomic) DUXBasicSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithContext:(id)a0;

- (id)dux_titleForColoseButton;
- (void)dismissLoadingView;
- (void)loadMoreData;
- (void)showBackgroundViewWithType:(long long)a0;
- (void)showHighlightInsertedUsers;
- (void)updateCellForIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupData;
- (void)showLoadingView;
- (void)refreshData;
- (void)dismissSheet;
- (void)configureSubviews;

@end
