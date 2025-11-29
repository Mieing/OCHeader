@class NSMutableArray;

@interface ACCAIGCFusionHorizontalWaterfallLayout : AWEBaseListBaseWaterfallLayout

@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableArray *rowWidths;

- (long long)rowCountForSection:(long long)a0;
- (unsigned long long)getShortestRowIndexWithRowWidths:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
