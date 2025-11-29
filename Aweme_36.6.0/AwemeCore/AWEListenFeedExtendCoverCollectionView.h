@class UIViewController, AWEListenFeedExtendCoverFlowLayout, AWEListenFeedExtendCoverFlowLayoutConfig, NSString, UICollectionViewCell, AWEListenFeedBaseCollectionView;
@protocol AWEListenFeedExtendCoverCollectionViewDelegate, AWEDPlayerFeedViewControllerProtocol, AWEListenFeedExtendCoverCollectionViewDataSource;

@interface AWEListenFeedExtendCoverCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEListenFeedExtendCoverFlowLayout *layout;
@property (retain, nonatomic) AWEListenFeedExtendCoverFlowLayoutConfig *layoutConfig;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double startOffsetX;
@property (retain, nonatomic) AWEListenFeedBaseCollectionView *collectionView;
@property (nonatomic) BOOL isLoadingPre;
@property (nonatomic) BOOL isLoadingNext;
@property (nonatomic) BOOL noMoreAtPre;
@property (nonatomic) BOOL noMoreAtNext;
@property (nonatomic) double oldItemSizeWithSpace;
@property (retain, nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> *playerViewController;
@property (weak, nonatomic) id<AWEListenFeedExtendCoverCollectionViewDataSource> dataSource;
@property (weak, nonatomic) id<AWEListenFeedExtendCoverCollectionViewDelegate> delegate;
@property (retain, nonatomic) UICollectionViewCell *playerUpdatedCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)dequeueReusableCellWithClass:(Class)a0 forIndexPath:(id)a1;
- (void)registerCellClass:(Class)a0;
- (double)caculateOffsetXAtIndex:(long long)a0;
- (void)scrollToItemAtIndex:(long long)a0 animate:(BOOL)a1;
- (void)buildData;
- (void)updateLayoutConfig;
- (void)updateMixPlayerViewWhenActive;
- (struct CGSize { double x0; double x1; })collectionCellItemSize;
- (double)currentPreDeltaScale;
- (double)currentNextDeltaScale;
- (void)updateVideoPlayFromIndex:(long long)a0 toIndex:(long long)a1;
- (double)itemSizeWithSpace;
- (long long)currentCollectionViewIndex;
- (id)preLoadingCell;
- (id)nextLoadingCell;
- (void)scrollToItemAtIndexNotForbidUserScroll:(long long)a0 animate:(BOOL)a1;
- (void)scrollView:(id)a0 needLoad:(unsigned long long)a1;
- (void)p_updateCellContentOffsetWithCell:(id)a0;
- (struct CGPoint { double x0; double x1; })currentCollectionViewContentOffset;
- (void)removeMixPlayerViewIfNeeded;
- (BOOL)checkIfNeedScrollWithIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (void)updateData;

@end
