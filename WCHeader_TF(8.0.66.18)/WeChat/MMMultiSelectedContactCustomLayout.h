@class NSArray, NSMutableArray;

@interface MMMultiSelectedContactCustomLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *itemXPosArray;
@property (retain, nonatomic) NSArray *finalLayoutAttributes;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (nonatomic) struct CGSize { double width; double height; } conentSize;
@property (nonatomic) double itemSizeLen;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)calcCenterLayoutItemXPos:(unsigned long long)a0;
- (unsigned long long)maxCountInScreen;
- (void)calcCenterAligmentLayoutWithCurLayoutAttributes:(id)a0 isDelete:(BOOL)a1;
- (void)calcItemLayoutAttributesOriginXWithXPosArray:(id)a0 layoutAttributes:(id)a1;
- (void).cxx_destruct;

@end
