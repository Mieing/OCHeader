@interface WCFinderCarouselFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) double defaultItemWidth;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double itemSpace;
@property (nonatomic) double itemWidth;
@property (nonatomic) double minScale;

- (id)initWithStyle:(unsigned long long)a0;
- (void)initial;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
