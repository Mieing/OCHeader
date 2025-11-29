@class UIImageView;

@interface CameraScanCombineCropImageView : UIView

@property (retain, nonatomic) UIImageView *outerBorderView;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (nonatomic) BOOL isAnimating;

- (id)init;
- (void)showBorderView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showCompletion:(id /* block */)a1 hideCompletion:(id /* block */)a2;
- (void)hideOuterBorderView;
- (void)doOuterBorderViewShowAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doOuterBorderExpandAndRestoreAnimation;
- (void)doOuterBorderViewHideAnimation;
- (void)resetCropImageView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRectSizeIfTooCloseToScreenEdge:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
