@interface TextStatePublishOfficialIconCollectionLayout : UICollectionViewFlowLayout

@property (nonatomic) long long itemCountPerRow;

- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)alignLayoutAttributesToPreviousRowIfNeeded:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;

@end
