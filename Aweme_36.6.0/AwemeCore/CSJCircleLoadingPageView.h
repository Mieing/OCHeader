@class CALayer, UILabel, CSJNumerAnimationLabel;

@interface CSJCircleLoadingPageView : CSJBaseLoadingPageView {
    BOOL _isPortrait;
}

@property (retain, nonatomic) CALayer *smallCircleLayer;
@property (retain, nonatomic) CALayer *bigCircleLayer;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) CSJNumerAnimationLabel *progressLabel;
@property (retain, nonatomic) UILabel *percentLabel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)p_createCircleLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color1:(id)a1 color2:(id)a2 lineWidth:(double)a3;
- (id /* block */)adButtonClickBlock;
- (void)setAdButtonClickBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPortrait;
- (void)layoutSubviews;
- (void)setIsPortrait:(BOOL)a0;

@end
