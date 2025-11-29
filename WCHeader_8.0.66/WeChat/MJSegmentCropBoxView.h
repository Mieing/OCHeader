@class UIView;

@interface MJSegmentCropBoxView : UIView

@property (nonatomic) struct CGSize { double width; double height; } croppedViewInitializedSize;
@property (nonatomic) double croppedViewInitializedScale;
@property (weak, nonatomic) UIView *croppedView;

- (id)init;
- (void)commonInit;
- (void)handlePanGesture:(id)a0 inView:(id)a1;
- (void)handlePinchGesture:(id)a0 inView:(id)a1;
- (void)restrictCroppedViewScaleTransformAnimated:(BOOL)a0;
- (void)restrictCroppedViewScaleTransform;
- (void)restrictCroppedViewCenterAnimated:(BOOL)a0;
- (void)restrictCroppedViewCenter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })restrictCroppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcCroppedRect;
- (void)resetToOriginalRect;
- (void).cxx_destruct;

@end
