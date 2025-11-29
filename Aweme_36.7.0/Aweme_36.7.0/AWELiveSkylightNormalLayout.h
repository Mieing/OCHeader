@class NSMutableDictionary;

@interface AWELiveSkylightNormalLayout : UICollectionViewLayout

@property (retain, nonatomic) NSMutableDictionary *cacheCellAttributes;
@property (retain, nonatomic) NSMutableDictionary *cacheHeaderAttributes;
@property (retain, nonatomic) NSMutableDictionary *cacheFooterAttributes;
@property (nonatomic) double nextItemX;
@property (nonatomic) long long nextZIndex;
@property (nonatomic) double itemHorizontalSpace;

- (id)buildAttributesWithX:(double)a0 itemType:(unsigned long long)a1 indexPath:(id)a2;
- (id)flowLayoutDelegate;
- (double)attributeYAlignmentBottom:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
