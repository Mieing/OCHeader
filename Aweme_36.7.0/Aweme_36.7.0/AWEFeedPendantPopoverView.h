@class NSString, UIImageView, NSTimer, UILabel, UIView;

@interface AWEFeedPendantPopoverView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) BOOL tapToDismiss;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (id)getShowAnimation;
- (id)getHideAnimation;
- (void)showOnView:(id)a0 adjustment:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2 complete:(id /* block */)a3;
- (void)dismissAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)hide;
- (id)initWithContent:(id)a0;
- (void)dismiss:(id /* block */)a0;
- (void)setupUI;
- (void)tapped:(id)a0;
- (void)updateContent:(id)a0;

@end
