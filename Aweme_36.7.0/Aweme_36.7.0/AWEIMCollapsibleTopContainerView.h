@class NSString, CAShapeLayer, AWEIMCollapsibleTopContainerUIConfig, UIView;
@protocol AWEIMCollapsibleTopContainerViewContentProtocol, AWEIMCollapsibleTopContainerViewDelegate;

@interface AWEIMCollapsibleTopContainerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) AWEIMCollapsibleTopContainerUIConfig *config;
@property (weak, nonatomic) id<AWEIMCollapsibleTopContainerViewDelegate> delegate;
@property (retain, nonatomic) id<AWEIMCollapsibleTopContainerViewContentProtocol> protocolContent;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (copy, nonatomic) id /* block */ animationCompletionBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *dragHintView;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) CAShapeLayer *maskShapeLayer;
@property (nonatomic) double drageHintHeight;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panGestureAction:(id)a0;
- (void)__onMaskViewTapped;
- (void)iesim_themeReload:(id)a0;
- (void)handleFrameSizeChanged:(struct CGSize { double x0; double x1; })a0;
- (void)reloadWithCustomizeAnimation;
- (void)reloadContentViewWithAnimationBlock:(id /* block */)a0;
- (double)p_selfWidth;
- (void)addProtocolContent:(id)a0;
- (void)expandUsingCustomizedAnimation;
- (void)expandWithAnimationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)collapseUsingCustomizedAnimation;
- (void)collapseWithAnimationBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)__updateUIWithExpanding:(BOOL)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (double)__containerHeight;
- (void)__updateContainerLayerMaskWithContainerHeight:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__selfFrame;
- (id)__animationContext;
- (void)__setupAnimationWithContext:(id)a0;
- (id)__containerViewBackgroundColor:(long long)a0;
- (double)__contentHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__dragHintViewFrameWithContainerHeight:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
