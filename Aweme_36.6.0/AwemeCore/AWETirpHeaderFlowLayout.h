@interface AWETirpHeaderFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) double defaultItemWidth;
@property (nonatomic) double factItemSpace;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double itemSpace_H;
@property (nonatomic) double itemWidth;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;

- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)initial;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
