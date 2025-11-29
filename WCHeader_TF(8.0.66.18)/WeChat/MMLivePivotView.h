@class NSString, MMLivePivotFooterView;
@protocol MMLivePivotViewDelegate;

@interface MMLivePivotView : UICollectionViewLayout <UICollectionViewDataSource>

@property (weak, nonatomic) id<MMLivePivotViewDelegate> delegate;
@property (retain, nonatomic) MMLivePivotFooterView *footerView;
@property (retain, nonatomic) MMLivePivotFooterView *headerView;
@property (nonatomic) BOOL enableSkeleton;
@property (nonatomic) unsigned long long recommendationLoadingState;
@property (nonatomic) unsigned long long historyLoadingState;
@property (readonly, nonatomic) BOOL useSkeleton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (id)getContainerWindow;
- (struct CGSize { double x0; double x1; })cellSize;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)headerLayoutAttributesWithCellSize:(struct CGSize { double x0; double x1; })a0;
- (id)skeletonLayoutAttributesAtIndexPath:(id)a0 cellSize:(struct CGSize { double x0; double x1; })a1;
- (id)footerLayoutAttributesAfterNumberOfCells:(unsigned long long)a0 cellSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned long long)footerViewDisplayStateForLoadingState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
