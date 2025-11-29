@interface UICollectionViewFlowLayoutWithAlignment : UICollectionViewFlowLayout

@property (nonatomic) double sumWidth;
@property (nonatomic) double betweenOfCell;
@property (nonatomic) long long cellType;

- (id)init;
- (id)initWthType:(long long)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCellFrameWith:(id)a0;

@end
