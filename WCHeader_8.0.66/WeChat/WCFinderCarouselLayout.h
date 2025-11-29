@class NSArray, NSIndexPath;

@interface WCFinderCarouselLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *layoutAttrbutes;
@property (retain, nonatomic) NSIndexPath *lockedCurrentIndexPath;

- (id)delegate;
- (id)init;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)itemCount;
- (double)itemWidthAtIndexPath:(id)a0;
- (double)carouselVisibleDistance;
- (void)adjustContentOffset;
- (id)indexPathsOfVisibleItemsWithContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0 atCardPos:(long long)a1 animationProgress:(double)a2;
- (void)updateLayoutAttributes:(id)a0;
- (void).cxx_destruct;

@end
