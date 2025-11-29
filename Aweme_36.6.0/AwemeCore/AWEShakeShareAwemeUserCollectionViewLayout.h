@interface AWEShakeShareAwemeUserCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) BOOL shouldSpringAnimateFirstAppearingCell;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;

+ (Class)layoutAttributesClass;

- (double)leadingTrailingInset;
- (long long)startIndexForItemInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)endIndexForItemInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)minXForItemAtIndex:(long long)a0;
- (long long)indexForCurrentNearestItem;
- (double)relativeDistanceToItemAtIndex:(long long)a0;
- (double)relativeDistanceToCurrentNearestItem;
- (double)maxXForItemAtIndex:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (long long)itemCount;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
