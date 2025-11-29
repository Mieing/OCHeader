@class UIImageView, NSString;

@interface MMLoadingIndicatorView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *loadingIndicator;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)startAnimation;
- (void)stopAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
