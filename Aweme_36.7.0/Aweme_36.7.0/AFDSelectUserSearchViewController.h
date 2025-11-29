@class AFDSelectUserViewModel, NSMutableArray, NSString, AFDSugSearchManager, UIView, AWEUILoadingView, UITableView;

@interface AFDSelectUserSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AFDSelectUserViewModel *viewModel;
@property (retain, nonatomic) AFDSugSearchManager *sugSearchManager;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ selectedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)p_loadMoreData;
- (void)p_fetchData;
- (BOOL)isNewDailyPanelStatusWithType:(unsigned long long)a0;
- (void)addDataSourceWithDataList:(id)a0;
- (void)endRefreshingWithError:(id)a0 dataList:(id)a1;
- (void)fetchSearchSugWithCompletion:(id /* block */)a0;
- (BOOL)isFriendPartSeeStatusWithType:(unsigned long long)a0;
- (BOOL)isFriendPublishBeforePartSeeStatusWithType:(unsigned long long)a0;
- (id)initWithViewModel:(id)a0 type:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reset;
- (void)viewDidLoad;
- (void)beginSearch;

@end
