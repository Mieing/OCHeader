@class NSMutableArray;

@interface IESECGoodsFeedDualColumnLayout : UICollectionViewFlowLayout {
    double _cachedOriginY;
    NSMutableArray *_layoutAttributesList;
}

@property (nonatomic) long long shoppingCartGoodsCount;

- (void)addAttributesIfNeeded:(id)a0;
- (double)firstRecommendAttributesOriginY;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
