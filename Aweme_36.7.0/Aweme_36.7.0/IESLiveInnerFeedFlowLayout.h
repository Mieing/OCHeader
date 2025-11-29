@class IESLiveInnerFeedContext, NSMutableDictionary, NSIndexPath;

@interface IESLiveInnerFeedFlowLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableDictionary *attributesCaches;
@property (retain, nonatomic) NSMutableDictionary *footerAttributesCaches;
@property (retain, nonatomic) NSIndexPath *footerIndexPath;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;

- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)initWithContext:(id)a0;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
