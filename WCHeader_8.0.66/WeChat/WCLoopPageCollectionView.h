@class NSArray, UICollectionView, WCLoopPageCollectionViewLayout, NSString;
@protocol WCLoopPageCollectionViewDelegate, WCLoopPageCollectionViewDataSource;

@interface WCLoopPageCollectionView : UIView <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCLoopPageCollectionViewLayoutDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) WCLoopPageCollectionViewLayout *collectionLayout;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSArray *cellList;
@property (retain, nonatomic) NSArray *cellWidthList;
@property (nonatomic) BOOL forbiddenNextAutoChange;
@property (weak, nonatomic) id<WCLoopPageCollectionViewDataSource> datasource;
@property (weak, nonatomic) id<WCLoopPageCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutOnDidSetup;
- (void)changeToNext;
- (void)reloadData;
- (void)genCellList;
- (void)genCellWidthList;
- (unsigned long long)getPrevCellIndex;
- (unsigned long long)getNextCellIndex;
- (unsigned long long)getLastCellIndex;
- (double)currentIndexCellOffsetX;
- (double)nextIndexCellOffsetX;
- (double)prevIndexCellOffsetX;
- (double)prevIndexCellWidth;
- (double)currentIndexCellWidth;
- (unsigned long long)numberOfItems;
- (id)viewForItemAtIndex:(unsigned long long)a0;
- (double)widthForViewAtIndex:(unsigned long long)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)updateOffset;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)lastItemWidth;
- (void).cxx_destruct;

@end
