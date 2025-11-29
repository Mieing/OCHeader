@class NSIndexPath;

@interface AWELongPressAdsActionFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) double normalContentHeight;
@property (nonatomic) double deltaPadding;
@property (retain, nonatomic) NSIndexPath *targetIndex;
@property (nonatomic) BOOL isExpanded;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
