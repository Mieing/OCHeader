@class UITableView, NSString, NSDictionary, AWEIMLiveCustomServiceListViewModel, AWEIMLiveCustomServiceFloatNavigationBar;

@interface AWEIMLiveCustomServiceListViewController : AWEIMChatListComponentViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMLiveCustomServiceListViewModel *viewModel;
@property (retain, nonatomic) AWEIMLiveCustomServiceFloatNavigationBar *customNaviBar;
@property (nonatomic) long long role;
@property (nonatomic) BOOL isInLive;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)p_loadMoreData;
- (void)p_updateNaviBar;
- (void)p_bindObserver;
- (void)p_setupViews;
- (void)p_reloadData;
- (void)p_updateEmpty;
- (void)updateSpUidFromLive:(id)a0;
- (void)p_updateNaviTitle:(id)a0;
- (void)p_endRrefreshingWithHasMore:(BOOL)a0;
- (void)p_setupLoadingFooter;
- (id)initWithRole:(long long)a0 isInLive:(BOOL)a1 extra:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;

@end
