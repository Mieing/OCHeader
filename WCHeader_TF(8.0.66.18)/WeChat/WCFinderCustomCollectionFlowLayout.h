@interface WCFinderCustomCollectionFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) BOOL useDamping;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
