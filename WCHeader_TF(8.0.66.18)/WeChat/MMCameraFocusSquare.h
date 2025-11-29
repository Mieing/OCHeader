@class CABasicAnimation;

@interface MMCameraFocusSquare : UIView {
    CABasicAnimation *_selectionBlink;
}

@property (nonatomic) double borderColorRedComponent;
@property (nonatomic) double borderColorGreenComponent;
@property (nonatomic) double borderColorBlueComponent;
@property (nonatomic) double borderColorAlphaComponent;
@property (nonatomic) double widthMax;
@property (nonatomic) double widthMin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initBorderColorAndColorComponents;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updatePoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
