@class NSMutableArray, NSMutableDictionary;
@protocol AWESearchWaterFallLayoutDelegate;

@interface AWESearchWaterFallLayout : UICollectionViewLayout

@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (retain, nonatomic) NSMutableArray *attrsArr;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableDictionary *destColumnCache;
@property (nonatomic) BOOL isSearchNeedWaterFallLayout;
@property (nonatomic) double currentColumnMargin;
@property (nonatomic) double currentRowMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } currentEdgeInsets;
@property (weak, nonatomic) id<AWESearchWaterFallLayoutDelegate> delegate;

- (unsigned long long)longestColumnIndex;
- (unsigned long long)shortestColumnIndex;
- (double)rowMargin;
- (long long)shortestColumnIndexFromCacheValue:(id)a0;
- (double)columnMargin;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
