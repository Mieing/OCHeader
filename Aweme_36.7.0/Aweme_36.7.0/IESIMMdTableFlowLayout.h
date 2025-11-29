@class IESIMMdTableCollectionViewLayoutCache;

@interface IESIMMdTableFlowLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) IESIMMdTableCollectionViewLayoutCache *layoutCache;

- (double)totalWidthForColBefore:(long long)a0;
- (double)totalHeightForRowBefore:(long long)a0;
- (double)widthForCol:(long long)a0;
- (double)sumArray:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)heightForRow:(long long)a0;

@end
