@class AWETeenAuthorRecommendDataController, AWEFeedRefreshFooter, NSString, UIView, UITableView;

@interface AWETeenAuthorRecommendViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenSubscribeMessage, AWETeenBlockMessage>

@property (retain, nonatomic) AWETeenAuthorRecommendDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) AWEFeedRefreshFooter *refreshFooter;
@property (copy, nonatomic) id /* block */ emptyDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)currentTabIsTop;
- (void)p_loadMoreIsPreload:(BOOL)a0;
- (void)p_endFooterRefreshing;
- (void)p_preloadMoreIfNeeded;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)didUpdateBlockStatus:(long long)a0 secUserID:(id)a1;
- (void)p_clearBlockAuthor;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)hasData;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
