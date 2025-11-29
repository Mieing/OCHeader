@class MMScreenShotForwardButton, CAGradientLayer, UIView;

@interface MMScreenShotForwardView : UIView

@property (retain, nonatomic) UIView *bottomBkgView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) MMScreenShotForwardButton *forwardButton;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) id /* block */ onClickForwardButton;
@property (copy, nonatomic) id /* block */ onClickOtherArea;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoading;
- (BOOL)isLandScape;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
