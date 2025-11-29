@protocol MinimizeBaseViewDelegate;

@interface MinimizeBaseView : UIView

@property (weak, nonatomic) id<MinimizeBaseViewDelegate> delegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)setAlpha:(double)a0;
- (BOOL)lookin_shouldCaptureImage;
- (void).cxx_destruct;

@end
