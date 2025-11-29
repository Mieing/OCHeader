@class KindaUITableView, MMUIActivityIndicatorView, MMVoidCallback, MMRefreshTableFooterView, UILabel, NSMutableArray, NSString;

@interface KindaTableView : KindaView <KindaUITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMKTableView>

@property (retain, nonatomic) KindaUITableView *tableView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) MMRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (nonatomic) unsigned long long loadingState;
@property (nonatomic) BOOL enabledFooterViewRefresh;
@property (retain, nonatomic) MMVoidCallback *footerRefreshCallback;
@property (retain, nonatomic) MMVoidCallback *onScrollCallBack;
@property (retain, nonatomic) MMVoidCallback *onScrollBeginBallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)makeCell:(id)a0 cellManager:(id)a1 indexPath:(id)a2;
- (void)updateFooterView;
- (void)updateLoadingLabel;
- (void)updateIndicator;
- (void)setFooterViewNormalState;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)kindaTableView:(id)a0 measureRowHeight:(id)a1 indexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 editActionsForRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setOnScrollCallBackImpl:(id)a0;
- (void)setOnBeginScrollCallbackImpl:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)getView;
- (void)setEnableFooterRefreshView:(BOOL)a0;
- (void)setFooterRefreshViewLoadMoreCallbackImpl:(id)a0;
- (void)setSelection:(int)a0;
- (void)smoothScrollToPosition:(int)a0;
- (void)setSelectionFromTop:(int)a0 y:(int)a1;
- (void)safeSetContentOffsetY:(double)a0 position:(int)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end
