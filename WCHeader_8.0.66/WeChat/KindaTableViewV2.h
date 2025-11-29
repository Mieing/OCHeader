@class MMTableView, MMVoidCallback, NSString, UIImpactFeedbackGenerator, NSMutableDictionary, KindaTableViewCellV2, MMRefreshTableFooterView, NSMutableArray, UILabel, MMUIActivityIndicatorView;

@interface KindaTableViewV2 : KindaView <WCFinderRefreshTableFooterViewDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMTableViewReorderDelegate, MMKTableViewV2>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableDictionary *heightAtIndexPath;
@property (retain, nonatomic) KindaTableViewCellV2 *measureCell;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) MMRefreshTableFooterView *footerView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *indicatorView;
@property (nonatomic) unsigned long long loadingState;
@property (nonatomic) BOOL enabledFooterViewRefresh;
@property (retain, nonatomic) MMVoidCallback *footerRefreshCallback;
@property (retain, nonatomic) MMVoidCallback *onScrollCallBack;
@property (retain, nonatomic) MMVoidCallback *onScrollBeginBallback;
@property (retain, nonatomic) NSString *lastTargetCellDescription;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *lightImpactFeedbackGenerator;
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
- (id)getCells;
- (void)setDragEnabled:(BOOL)a0;
- (BOOL)tableView:(id)a0 reorderFromIndex:(id)a1 toIndex:(id)a2;
- (BOOL)tableView:(id)a0 shouldStartResortAtPos:(struct CGPoint { double x0; double x1; })a1 inCell:(id)a2 atIndexPath:(id)a3;
- (id)tableView:(id)a0 draggingViewForIndexPath:(id)a1;
- (void)onReorderEnd;
- (void)tableView:(id)a0 didMoveFromIndex:(id)a1 toIndex:(id)a2;
- (id)getAccessibilityDescriptionForCellAtIndex:(long long)a0;
- (BOOL)isNumericString:(id)a0;
- (void)findAllTextsInView:(id)a0 texts:(id)a1;
- (void).cxx_destruct;

@end
