@interface IESLiveLimitCommentCollectionViewLayout : UICollectionViewFlowLayout

@property (nonatomic) double height;
@property (nonatomic) double midY;
@property (nonatomic) double maxAngle;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
