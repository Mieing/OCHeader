@class NSMutableArray;
@protocol AWEIMCollapsibleCollectionViewLayoutDelegate;

@interface AWEIMCollapsibleCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) BOOL wasCollapsed;
@property (retain, nonatomic) NSMutableArray *previousAttributes;
@property (retain, nonatomic) NSMutableArray *currentAttributes;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) long long numberOfOverlappedCellRevealingWhenCollapsed;
@property (nonatomic) double revealingSpaceForOverlappedCell;
@property (weak, nonatomic) id<AWEIMCollapsibleCollectionViewLayoutDelegate> delegate;

- (id)attributesForCollapsingStatus:(BOOL)a0 getContentSizeY:(double *)a1;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
