@class UIButton;
@protocol ACCNewCaptureAnimationViewDelegate;

@interface ACCNewCaptureAnimationView : UIView

@property (retain, nonatomic) UIButton *placeHolderButton;
@property (nonatomic) double widthDiff;
@property (weak, nonatomic) id<ACCNewCaptureAnimationViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 placeHolderButton:(id)a1;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
