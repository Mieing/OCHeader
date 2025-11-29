@interface ACCAdvanceEditUICollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL isExtend;
@property (nonatomic) double scrollDistance;
@property (nonatomic) struct CGPoint { double x; double y; } lastOffset;

- (void)prepareLayout;
- (id)init;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
