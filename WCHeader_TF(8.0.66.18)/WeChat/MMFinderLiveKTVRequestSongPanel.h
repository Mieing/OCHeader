@class WCFinderLiveAnchorLogReporter, UICollectionView, MMFinderLiveTaskId, MMUISearchBar, WCTimeLineFooterView, MMFinderLiveKTVBoardItem, MMFinderLiveKTVPanelTitleView, NSMutableArray, UIView, NSString, MMTableView, MMUILabel, MMUIActivityIndicatorView, NSMutableSet, NSData;

@interface MMFinderLiveKTVRequestSongPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveKTVSongOperationExt, MMLiveTaskMgrExt, UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveKTVPanelTitleView *titleView;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) NSString *curSearchID;
@property (retain, nonatomic) NSString *curSearchText;
@property (retain, nonatomic) NSData *searchLastBuffer;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (nonatomic) BOOL searchHasNext;
@property (nonatomic) BOOL searchTextAutoFilled;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) MMUILabel *loadingLabel;
@property (retain, nonatomic) UICollectionView *boardCollectionView;
@property (retain, nonatomic) UICollectionView *subBoardCollectionView;
@property (retain, nonatomic) UIView *tabIndicatorView;
@property (retain, nonatomic) MMTableView *songTable;
@property (retain, nonatomic) NSMutableArray *boardItems;
@property (retain, nonatomic) MMFinderLiveKTVBoardItem *selectedBoard;
@property (retain, nonatomic) NSMutableArray *songItems;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL hasKgAuthorized;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter;
@property (retain, nonatomic) NSMutableSet *reportedSongUniqueIdSet;
@property (nonatomic) unsigned long long connectMicScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 scene:(unsigned long long)a1 connectMicScene:(unsigned long long)a2;

- (id)initWithTaskId:(id)a0 scene:(unsigned long long)a1 connectMicScene:(unsigned long long)a2;
- (void)setupPageSheetConfig;
- (void)reportPanel;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)leftNavButton;
- (void)onLeftButtonTapped;
- (void)updateBoardFooter;
- (void)updateFooterView:(unsigned long long)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)doSearchWithText:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onClearForExitLiveWithLiveTask:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)onRequestSongItemReturned:(id)a0 success:(BOOL)a1;
- (id)liveTask;
- (void)initData;
- (void)initBoard:(id)a0 lastBuffer:(id)a1 continueFlag:(unsigned int)a2 boardItems:(id)a3 hasKgAuthorized:(BOOL)a4;
- (void)reportBoardExpose;
- (void)checkAndReportCellExpose:(id)a0;
- (void)getSongListForBoard:(id)a0 subBoardItem:(id)a1 completeBlock:(id /* block */)a2;
- (void)getSearchResult;
- (void)getSmartBoxResult;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void).cxx_destruct;

@end
