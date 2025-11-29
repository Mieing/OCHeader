@protocol AWECenteredScrollFlowLayoutDelegate;

@interface AWECenteredScrollFlowLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) id<AWECenteredScrollFlowLayoutDelegate> delegate;
@property (nonatomic) BOOL enableScale;
@property (copy, nonatomic) id /* block */ ratioBlock;

- (id)updatedLayoutAttributes:(id)a0 forIndex:(long long)a1;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
