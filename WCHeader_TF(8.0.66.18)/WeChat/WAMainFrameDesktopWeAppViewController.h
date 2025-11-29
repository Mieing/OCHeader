@class NSString, WADesktopStarListViewModel, WARecentStarListViewModel;
@protocol WAMainFrameDesktopWeAppViewControllerDelegate;

@interface WAMainFrameDesktopWeAppViewController : WAStarListViewController <UIScrollViewDelegate, WADesktopStarListDelegate> {
    WADesktopStarListViewModel *_myViewModel;
    WARecentStarListViewModel *_recentViewModel;
    BOOL _isMy;
    long long _reportState;
    long long _lastReportIndex;
    long long _moreStartIndex;
    long long _moreEndIndex;
    BOOL _listHasChanged;
}

@property (weak, nonatomic) id<WAMainFrameDesktopWeAppViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)createViewModel;
- (BOOL)listHasChanged;
- (void)switchWeAppType:(BOOL)a0;
- (void)initOperationWindow;
- (BOOL)canShowSearch;
- (BOOL)sectionIsWeApp:(id)a0;
- (long long)itemCount;
- (void)scrollToBottom;
- (void)reloadData;
- (void)reset;
- (void)startLoadingBlocked;
- (id)reportSessionId;
- (void)setIsInEditMode:(BOOL)a0;
- (void)initCollectionView;
- (void)updateRefreshFooterHiddenState;
- (void)updateViewAnimated:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)uiScene;
- (id)sceneNote:(long long)a0;
- (void)configureCell:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 itemAtIndexPath:(id)a1 canMoveToIndexPath:(id)a2;
- (void)collectionView:(id)a0 layout:(id)a1 onLongPress:(id)a2 indexPath:(id)a3;
- (BOOL)collectionView:(id)a0 itemDidCommitToStarAtIdexPath:(id)a1;
- (void)reportClickSearch;
- (void)reportClickWeApp:(id)a0 index:(long long)a1;
- (void)onWeAppItemOpened:(id)a0;
- (void)onItemStared:(id)a0 index:(long long)a1 isMy:(long long)a2;
- (void)onItemDeleted:(id)a0 index:(long long)a1 isMy:(long long)a2;
- (void)onItemMove:(id)a0 from:(long long)a1 to:(long long)a2 isMy:(long long)a3;
- (void).cxx_destruct;

@end
