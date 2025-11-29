@class MMUIView, CircleToSearchOverlayView;

@interface CircleToSearchPreviewView : MMUIImageView

@property (retain, nonatomic) CircleToSearchOverlayView *overlayView;
@property (retain, nonatomic) MMUIView *fakeOverlayView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFocusFrame;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)focusOn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAnimationDuration:(double)a1;
- (void)showFakeOverlayView;
- (void)hideFakeOverlayView;
- (void).cxx_destruct;

@end
