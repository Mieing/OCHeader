@class UITableView, NSString, NSArray, AWEVisibleScopeManager, IESLiveListDataController, AWELiveVisibleScopeListHeaderView, IESLiveWebpLoadingView;

@interface AWELiveVisibleScopeTabListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESLiveRefreshDelegate>

@property (retain, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWEVisibleScopeManager *manager;
@property (nonatomic) unsigned long long currentType;
@property (retain, nonatomic) NSArray *sectionArray;
@property (nonatomic) unsigned long long currentDataTypeForAllTab;
@property (retain, nonatomic) IESLiveListDataController *currentDataController;
@property (retain, nonatomic) AWELiveVisibleScopeListHeaderView *sectionHeader;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) unsigned long long curVisibleType;
@property (copy, nonatomic) id /* block */ selectedListChangedBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ fetchAllUserBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)loadMoreData;
- (void)reloadTableViewAfterSelectUser:(id)a0 chatGroup:(id)a1 isSelected:(BOOL)a2 needReload:(BOOL)a3;
- (void)onChatGroupRemoveWith:(id)a0;
- (id)initWithType:(unsigned long long)a0 awemeID:(id)a1 manager:(id)a2;
- (void)endReloadLoading;
- (void)startReloadLoading;
- (void)scrollView:(id)a0 willBeginRefreshWithRefreshType:(unsigned long long)a1;
- (id)scrollView:(id)a0 viewForRefreshWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (double)scrollView:(id)a0 heightForRefreshViewWithRefreshType:(unsigned long long)a1 refreshState:(unsigned long long)a2;
- (BOOL)isChatGroupAtIndexPath:(id)a0;
- (id)userOrChatGroupAtIndexPath:(id)a0;
- (id)sectionArrayWithType:(unsigned long long)a0;
- (unsigned long long)userTypeForTabType:(unsigned long long)a0 allTabDataType:(unsigned long long)a1;
- (id)currentDataSourceAtSection:(long long)a0;
- (void)p_selectChatGroup:(id)a0 isDisable:(BOOL)a1 needReload:(BOOL)a2;
- (void)p_selectUser:(id)a0 isDisable:(BOOL)a1 needReload:(BOOL)a2;
- (unsigned long long)currentSelectSource;
- (void)onChatGroupSelectWith:(id)a0;
- (id)emptyTitleForTab:(unsigned long long)a0;
- (id)emptyDescForTab:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (void)endRefreshing;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)reloadTableView;

@end
