@class AWEListenFeedExtendCoverFlowLayoutConfig;

@interface AWEListenFeedExtendCoverFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) BOOL applyTransformToAttributesDelegate;
@property (retain, nonatomic) AWEListenFeedExtendCoverFlowLayoutConfig *layoutConfig;

- (void)applyTransformToAttributes:(id)a0;
- (void)initializeTransformAttributes:(id)a0;
- (void)applyLinearTransformToAttributes:(id)a0 scale:(double)a1 alpha:(double)a2;
- (void)applyLinearTransformToAttributes:(id)a0;
- (unsigned long long)directionWithCenterX:(double)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
