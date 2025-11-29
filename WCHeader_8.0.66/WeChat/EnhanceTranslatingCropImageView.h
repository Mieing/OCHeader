@class UIImageView;

@interface EnhanceTranslatingCropImageView : UIView

@property (retain, nonatomic) UIImageView *outerBorderView;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (nonatomic) BOOL isAnimating;

- (id)init;
- (void)showBorderView:(struct CGPoint { double x0; double x1; })a0 rightTop:(struct CGPoint { double x0; double x1; })a1 leftBottom:(struct CGPoint { double x0; double x1; })a2 rightBottom:(struct CGPoint { double x0; double x1; })a3 showCompletion:(id /* block */)a4 hideCompletion:(id /* block */)a5;
- (void)updateOuterBorderView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftTop:(struct CGPoint { double x0; double x1; })a1 rightTop:(struct CGPoint { double x0; double x1; })a2 leftBottom:(struct CGPoint { double x0; double x1; })a3 rightBottom:(struct CGPoint { double x0; double x1; })a4;
- (void)drawRoundCorner:(struct CGContext { } *)a0 vetrix:(struct CGPoint { double x0; double x1; })a1 leftVetrix:(struct CGPoint { double x0; double x1; })a2 rightVetrix:(struct CGPoint { double x0; double x1; })a3;
- (void)doOuterBorderShowAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doOuterBorderExpandAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doOuterBorderHideAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideOuterBorderView;
- (void)resetCropImageView;
- (void).cxx_destruct;

@end
