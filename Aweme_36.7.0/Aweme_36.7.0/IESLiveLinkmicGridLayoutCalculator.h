@class NSArray, IESLiveLinkmicCanvasLayoutGrid;

@interface IESLiveLinkmicGridLayoutCalculator : NSObject

@property (retain, nonatomic) IESLiveLinkmicCanvasLayoutGrid *config;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect; struct CGPoint { double x; double y; } mainSlotOriginOffset; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainSLotSessionRatioRect; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } slotSessionRatioRect; } params;
@property (copy, nonatomic) NSArray *fixedSlotSessionRects;
@property (copy, nonatomic) NSArray *fixedSlotRects;
@property (copy, nonatomic) NSArray *fixedSlotInsets;
@property (copy, nonatomic) NSArray *fixedSeparatorSlotRects;
@property (readonly, copy, nonatomic) NSArray *slotRects;
@property (readonly, copy, nonatomic) NSArray *slotInset;
@property (readonly, copy, nonatomic) NSArray *streamSlotRects;
@property (readonly, copy, nonatomic) NSArray *separatorRects;

+ (id)calculatorWithConfig:(id)a0 params:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; })a1;
+ (id)calculatorWithConfig:(id)a0 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerRect;
- (id)initWithConfig:(id)a0 params:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; })a1;
- (void)calculateFixedSizeSlotsRect;
- (void)calculateFixedSizeSlotsInset;
- (void)calculateFixedSizeStreamLayoutSlotsRect;
- (void)calculateFixedSizeSeparatorsRect;
- (struct CGSize { double x0; double x1; })mainSlotSessionViewSizeWithContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })otherSlotSessionViewSizeWithContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)calculateRectsWithMainSlotOrigin:(struct CGPoint { double x0; double x1; })a0 mainSlotRatio:(struct CGSize { double x0; double x1; })a1 mainSlotOriginOffset:(struct CGPoint { double x0; double x1; })a2 otherSlotOrigin:(struct CGPoint { double x0; double x1; })a3 otherSlotRatio:(struct CGSize { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slotRectWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })mainSlotSessionViewSize;
- (struct CGSize { double x0; double x1; })otherSlotSessionViewSize;
- (void).cxx_destruct;
- (void)validate;
- (void)validateConfig;
- (void)calculate;

@end
