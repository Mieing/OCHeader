@class UIViewPropertyAnimator, UIVisualEffectView, UIView;

@interface TextStateMediaEffectCompositeView : UIView

@property (retain, nonatomic) UIView *darkenView;
@property (retain, nonatomic) UIView *blurContainerView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIViewPropertyAnimator *blurAnimator;
@property (nonatomic) unsigned int effects;
@property (nonatomic) double transitionProgress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initNotifications;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)addBlurViewEffect;
- (void)removeBlurViewEffect;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (void).cxx_destruct;

@end
