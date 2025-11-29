@class NSArray, NSMutableArray;

@interface MMMusicNoDotSelectItemDisplayViewCustomLayout : UICollectionViewFlowLayout

@property (retain, nonatomic) NSArray *itemXPosArray;
@property (retain, nonatomic) NSArray *finalLayoutAttributes;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double itemSizeLen;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (unsigned long long)maxCountInScreen;
- (id)calcCenterLayoutItemXPos:(unsigned long long)a0;
- (void)calcCenterAligmentLayoutWithCurLayoutAttributes:(id)a0 isDelete:(BOOL)a1;
- (void)calcItemLayoutAttributesOriginXWithXPosArray:(id)a0 layoutAttributes:(id)a1;
- (void).cxx_destruct;

@end
