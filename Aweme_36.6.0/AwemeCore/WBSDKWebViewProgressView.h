@class WBProgressComponentView, UIColor, UIImage;

@interface WBSDKWebViewProgressView : UIView

@property (retain, nonatomic) WBProgressComponentView *container;
@property (retain, nonatomic) WBProgressComponentView *fillView;
@property (nonatomic) BOOL animateFromCurrentState;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } progressEdgeInsets;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *containerColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIImage *containerImage;
@property (retain, nonatomic) UIImage *progressImage;
@property (nonatomic) double progress;
@property (nonatomic) BOOL autoSetCornerRadiusToHalfHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillViewFrame;
- (double)validCornerRadiusForView:(id)a0;
- (void)setProgress:(double)a0 animationDuration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setProgress:(double)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
