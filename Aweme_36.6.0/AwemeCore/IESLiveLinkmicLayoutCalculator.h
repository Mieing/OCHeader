@class IESLiveLinkmicLayoutUIAdapter;
@protocol IESLiveLinkmicLayoutConfig;

@interface IESLiveLinkmicLayoutCalculator : NSObject

@property (retain, nonatomic) id<IESLiveLinkmicLayoutConfig> config;
@property (retain, nonatomic) IESLiveLinkmicLayoutUIAdapter *adapter;

- (unsigned long long)alignType;
- (id)buildLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerContainerFrame;
- (id)calculateStreamAttributes;
- (id)calculateUIAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrameWithConfig:(id)a0 adapter:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slotsContainerFrameWithConfig:(id)a0 adapter:(id)a1;
- (id)slotsRectsWithContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seatContainerFrame;
- (id)clipSeatRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 seatsRectArray:(id)a1 container:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContentRectWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentCanvasRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCanvasRectWithContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ratio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCanvasRectWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })currentMediaSize;
- (double)currentMediaRatioWH;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContentRectWithCanvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)seatRatios;
- (id)useMarginWithSlots:(id)a0 width:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentContainerWithBaseContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateContentSizeWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })calculateContentPositionWithContentSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1 origin:(struct CGPoint { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })calculateAspectFitContentSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateAspectFillContentSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateFillContentSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentRatioWH;
- (struct CGSize { double x0; double x1; })aspectFillSizeWithContainerSize:(struct CGSize { double x0; double x1; })a0 ratioWH:(double)a1;
- (struct CGSize { double x0; double x1; })aspectFitSizeWithContainerSize:(struct CGSize { double x0; double x1; })a0 ratioWH:(double)a1;
- (struct CGSize { double x0; double x1; })calculateCanvasSizeWithContainer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateAspectFitCanvasSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateAspectFillCanvasSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })calculateFillCanvasSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0 adapter:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (unsigned long long)scaleMode;

@end
