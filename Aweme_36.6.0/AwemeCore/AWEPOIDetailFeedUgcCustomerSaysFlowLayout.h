@class NSArray, NSMutableArray;

@interface AWEPOIDetailFeedUgcCustomerSaysFlowLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableArray *attributeArray;
@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) BOOL expandButtonDidShow;
@property (nonatomic) BOOL forceHideExpandButton;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
