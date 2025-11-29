@interface IESLiveCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_evaluatedSectionInsetForItemAtIndex:(long long)a0;
- (double)p_evaluatedMinimumInteritemSpacingForSectionAtIndex:(long long)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
