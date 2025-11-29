@class NSMutableArray, NSMutableDictionary;
@protocol AFDFullPageFlowWaterFallViewLayoutDelegate;

@interface AFDFullPageFlowWaterFallViewLayout : AWEBaseListWaterfallLayout

@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttributes;
@property (retain, nonatomic) NSMutableDictionary *footersAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (weak, nonatomic) id<AFDFullPageFlowWaterFallViewLayoutDelegate> delegate;
@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;

- (id)awelistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildUnionRects;
- (long long)columnCountForSection:(long long)a0;
- (unsigned long long)longestColumnIndexInSection:(long long)a0;
- (unsigned long long)shortestColumnIndexInSection:(long long)a0;
- (double)minimumInteritemSpacing:(long long)a0;
- (double)minimumColumnSpacing:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
