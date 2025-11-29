@class NSArray, AWETransformerLayoutGridAttributes, NSString, NSMutableArray;

@interface AWETransformerLayoutStrategyGrid : NSObject <AWETransformerLayoutStrategyProtocol>

@property (retain, nonatomic) AWETransformerLayoutGridAttributes *gridAttributes;
@property (copy, nonatomic) NSArray *gridChilds;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic) unsigned long long rowFrSum;
@property (nonatomic) unsigned long long colFrSum;
@property (nonatomic) double columnGap;
@property (nonatomic) double rowGap;
@property (retain, nonatomic) NSMutableArray *colFrArr;
@property (retain, nonatomic) NSMutableArray *rowFrArr;
@property (nonatomic) unsigned long long maxShowNum;
@property (nonatomic) double maxShowItemVisibleSpace;
@property (nonatomic) double containerRightPadding;
@property (nonatomic) double containerBottomPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerElement:(id)a0;
- (void)calculateLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)__gridElementsWithArr:(id)a0;
- (void)__parseAttributesWithElement:(id)a0;
- (void)__countGapWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)__calculateLayoutFrameForSubElement:(id)a0 index:(unsigned long long)a1 contentWidth:(double)a2 contentHeight:(double)a3;
- (double)__parseGapString:(id)a0 refValue:(double)a1;
- (id)__parseRepeatFromString:(id)a0;
- (long long)__parseFrFromString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
