@class CALayer, CAShapeLayer;

@interface EditImageCropOverlayView : MMUIView

@property (retain, nonatomic) CALayer *blackLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _brightFrame;
@property (nonatomic) unsigned long long _overlayLevel;
@property (nonatomic) long long cropOverlayViewStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
