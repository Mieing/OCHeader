@class UIStackView;

@interface AWEFormatLiveMessageListLoadingView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL didStopAnimation;

- (id)createDotView;
- (void)_doAnimation;
- (void)animateView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
