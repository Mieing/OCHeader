@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface LynxListLayoutManager : NSObject <LynxListLayoutProtocol>

@property (retain, nonatomic) NSMutableArray *models;
@property (nonatomic) long long firstInvalidIndex;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) double mainAxisGap;
@property (nonatomic) double crossAxisGap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (retain, nonatomic) NSArray *fullSpanItems;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) BOOL needAlignHeight;
@property (nonatomic) long long lastValidModel;
@property (retain, nonatomic) NSMutableArray *mainSizes;
@property (retain, nonatomic) NSMutableArray *mainSizesCache;
@property (retain, nonatomic) NSMutableArray *layoutColumnInfo;
@property (retain, nonatomic) NSDictionary *estimatedHeights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModels:(id)a0;
- (struct CGSize { double x0; double x1; })getContentSize;
- (void)resetMainSizesWithNumberOfColumns:(unsigned long long)a0;
- (double)largestMainSize;
- (void)retrieveMainSizeFromCacheAtInvalidIndex:(long long)a0;
- (double)largestSizeInMainSizes:(id)a0;
- (unsigned long long)findNearestFullSpanItem:(unsigned long long)a0;
- (unsigned long long)shortestColumn;
- (double)shortestMainSize;
- (BOOL)isVerticalLayout;
- (double)layoutOffsetForFullSpanItems:(double)a0 crossSize:(double)a1 paddingStart:(double)a2 paddingEnd:(double)a3;
- (id)attributesFromIndex:(long long)a0;
- (double)layoutOffsetForFullSpanItem:(long long)a0;
- (BOOL)layoutModelVisibleInIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateModelFrame:(double)a0 crossAxisOffset:(double)a1 itemMainSize:(double)a2 itemCrossSize:(double)a3;
- (double)crossSize:(BOOL)a0;
- (double)mainSize:(long long)a0;
- (double)crossUpperInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultModelFrame:(id)a0;
- (long long)findColumnIndex:(long long)a0 withNearestFullSpanIndex:(long long)a1;
- (double)adjustOffsetAtIndex:(unsigned long long)a0 originalOffset:(double)a1 nearestFullSpan:(unsigned long long)a2;
- (double)largestMainSizeInPreviousRowAtIndex:(unsigned long long)a0 withNearestFullSpanIndex:(unsigned long long)a1;
- (long long)findWhichItemToDisplayInColumn:(long long)a0;
- (void)updateModelsWithRemovals:(id)a0;
- (void)updateModelsWithInsertions:(id)a0;
- (id)findWhichItemToDisplayOnTop;
- (void)updateBasicInvalidationContext:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutFrom:(long long)a0 to:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)getCount;

@end
