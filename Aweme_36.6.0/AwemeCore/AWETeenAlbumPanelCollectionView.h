@class NSString, AWETeenAlbumDataController;

@interface AWETeenAlbumPanelCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL isLandscapePLay;
@property (nonatomic) BOOL isLandscapeStyle;
@property (nonatomic) long long playingIndex;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) long long preloadPreviousCount;
@property (nonatomic) long long preloadMoreCount;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (copy, nonatomic) id /* block */ loadPreviousBlock;
@property (copy, nonatomic) id /* block */ cellWillDisplayBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ scrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupBind;
- (void)updatePlayingIndex:(long long)a0 needFocus:(BOOL)a1;
- (void)p_setupFooterAndHeader;
- (void)p_updateBottomMask;
- (void)p_selectCurrentCell:(id)a0 atIndex:(long long)a1;
- (void)p_updatePreloadDataIfNeeded;
- (BOOL)p_didScrollAtFist;
- (id)initWithDataController:(id)a0 isLandscape:(BOOL)a1;
- (void)scrollToCellAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didDismiss;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)cellHeight;

@end
