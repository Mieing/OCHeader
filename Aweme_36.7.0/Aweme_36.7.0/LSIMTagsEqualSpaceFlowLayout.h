@interface LSIMTagsEqualSpaceFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) double lineSumCellWidth;
@property (nonatomic) double cellSpacing;
@property (nonatomic) unsigned long long alignStyle;

- (void)adjustCellFrameWithCurrentLineLayouts:(id)a0 lineContentWidth:(double)a1;
- (id)initWithAlignStyle:(unsigned long long)a0 cellSpacing:(double)a1 lineSpacing:(double)a2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
