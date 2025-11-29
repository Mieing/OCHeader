@class GameCenterMessageRedPointInfo, NSString, MMLoadMoreTableView, GameLifeLoadingView, GameLifeChatEmptyView, GameLifeConversationCellDataSource;

@interface GameLifeChatViewController : GameCenterNativeVc <UITableViewDelegate, UITableViewDataSource, GameLifeDataServiceExt, GameLifeConversationCellDataSourceDelegate, GameLifeLoadingViewDelegate, MMLoadMoreTableViewDelegate, GameLifeConversationCellDelegate> {
    GameLifeLoadingView *_loadingView;
    GameLifeLoadingView *_loadingMoreView;
    GameLifeChatEmptyView *_emptyView;
    BOOL _showLoadingMore;
    BOOL _loadInitialReported;
}

@property (retain, nonatomic) GameLifeConversationCellDataSource *cellDataSource;
@property (retain, nonatomic) MMLoadMoreTableView *tableView;
@property (retain, nonatomic) GameCenterMessageRedPointInfo *redPointInfo;
@property (nonatomic) unsigned int sourceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)unregisterExtension;
- (id)init;
- (void)onQuitSessionViewController;
- (BOOL)isParentViewControllerGameLifeTabbarVc;
- (float)getTabBarHeight;
- (void)retry:(id)a0;
- (double)tableViewTop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)adjustTableViewInset:(id)a0;
- (long long)dataIndexForTableIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)openGameCenterMsgController:(int)a0;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)onConversationUpdated;
- (void)onGameCenterMessageRedPointInfoChange:(id)a0;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)a0 hasMore:(BOOL)a1;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(BOOL)a0;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onPanShow:(id)a0;
- (void)reportAllVisibleConversationItem;
- (void)reportConversationItem:(unsigned int)a0 actionId:(int)a1 actionStatus:(id)a2;
- (void)reportConversationUIExposure;
- (void)reportLoadInitial;
- (unsigned int)getSourceScene;
- (id)navigationBarBackgroundColor;
- (id)navigationController;
- (void).cxx_destruct;

@end
