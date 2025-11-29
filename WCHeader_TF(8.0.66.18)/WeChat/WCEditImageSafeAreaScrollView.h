@class MMUIView;

@interface WCEditImageSafeAreaScrollView : WCEditImageScrollView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } areaFrame;
@property (retain, nonatomic) MMUIView *topLine;
@property (retain, nonatomic) MMUIView *bottomLine;
@property (retain, nonatomic) MMUIView *leftLine;
@property (retain, nonatomic) MMUIView *rightLine;

+ (BOOL)isCGRect1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)handlePanGesture:(id)a0;
- (void)autoAdjustAllWidgetsPosition;
- (void)autoAdjustWidgetPosition:(id)a0 completion:(id /* block */)a1;
- (void)updateAreaLineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAreaLineHidden:(BOOL)a0;
- (void)drawDottedLineByCAShapeLayer:(id)a0 isHorizonal:(BOOL)a1;
- (void)drawDottedLineByCAShapeLayer:(id)a0 dotLength:(int)a1 dotSpacing:(int)a2 lineColor:(id)a3 lineDirection:(BOOL)a4;
- (void).cxx_destruct;

@end
