@class UIColor, UIImageView, UIView, StrokeView;

@interface SightFocusView : UIView {
    BOOL _showLightingBar;
    BOOL _isLightingBarShowing;
    double _currentPercent;
    double _increasePercent;
}

@property (retain, nonatomic) StrokeView *focusRectView;
@property (retain, nonatomic) UIImageView *lightIconView;
@property (retain, nonatomic) UIView *topProgressLine;
@property (retain, nonatomic) UIView *bottomProgressLine;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *shadowColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showLightingBar:(BOOL)a1;
- (void)initViews;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showAtFocusCenter:(struct CGPoint { double x0; double x1; })a0 showCompletion:(id /* block */)a1 hideCompletion:(id /* block */)a2;
- (void)shine;
- (void)hide:(double)a0 completion:(id /* block */)a1;
- (id)getShineAnim:(double)a0 count:(unsigned int)a1;
- (BOOL)showLightingBar;
- (void)disableLightingBarMoving;
- (void)setLightingBarInRight:(BOOL)a0;
- (void)setLightingBarPercent:(double)a0;
- (double)increaseLightingBarPercent:(double)a0;
- (void).cxx_destruct;

@end
