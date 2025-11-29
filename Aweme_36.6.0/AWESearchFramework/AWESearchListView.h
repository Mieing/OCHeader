@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, UIPanGestureRecognizer;
@protocol AWESearchListViewDelegate, AWESearchListViewDataSource;

@interface AWESearchListView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEModernFullscreenTransitionOuterContextProvider>

@property (nonatomic) long long scrollDirection;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long transitionIndex;
@property (weak, nonatomic) id<AWESearchListViewDelegate> delegate;
@property (weak, nonatomic) id<AWESearchListViewDataSource> dataSource;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } listContentOffset;
@property (readonly, nonatomic) UIPanGestureRecognizer *listViewPanGestureRecognizer;
@property (nonatomic) BOOL darkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)reloadDataWithModels:(id)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)_modelAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })_itemSizeForCellAtIndexPath:(id)a0;
- (id)initWithScrollDirection:(long long)a0;
- (void)reloadDataWithModels:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_bottomMargin;
- (double)_itemSpacing;
- (double)_rightMargin;
- (double)_topMargin;
- (double)_leftMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_activeRect;

@end
