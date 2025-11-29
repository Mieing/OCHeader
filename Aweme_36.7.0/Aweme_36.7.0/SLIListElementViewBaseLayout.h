@class IESECSliceXListElementView, NSMutableArray;

@interface SLIListElementViewBaseLayout : UICollectionViewLayout

@property (nonatomic) BOOL hasSystemInvokePrepareLayout;
@property (nonatomic) BOOL isDeprecatedLayout;
@property (weak, nonatomic) IESECSliceXListElementView *listElementView;
@property (nonatomic) BOOL isVerticalScroll;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double columnGap;
@property (nonatomic) double rowGap;
@property (nonatomic) long long crossAxisSpanCount;
@property (nonatomic) long long initialScrollIndex;
@property (nonatomic) double initialScrollOffset;
@property (nonatomic) long long crossAxisLength;
@property (retain, nonatomic) NSMutableArray *cachedAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutCalcluatedRect;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

+ (void)initialize;

- (void)resetPreciseInfo;
- (id)initWithListElementView:(id)a0;
- (double)calculateThenSetCrossAxisLengthWithFitSize:(struct CGSize { double x0; double x1; })a0 needPadding:(BOOL)a1;
- (double)calculateMainAxisLengthAndLayoutWithFitSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareLayoutWithFitSize:(struct CGSize { double x0; double x1; })a0 isSystemFirstInvoke:(BOOL)a1 isCalculatingMainAxisLength:(BOOL)a2;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForTransitionToLayout:(id)a0;

@end
