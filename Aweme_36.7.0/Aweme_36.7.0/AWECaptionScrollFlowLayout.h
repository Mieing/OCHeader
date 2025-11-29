@protocol AWECaptionScrollFlowLayoutDelegate;

@interface AWECaptionScrollFlowLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) id<AWECaptionScrollFlowLayoutDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
