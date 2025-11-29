@class UIView, AFDReusableBubbleArrowContainerView, AFDReusableBubbleContentView, UITapGestureRecognizer, NSString, NSMutableDictionary, NSMutableArray, AFDBubbleShadow, UIColor;
@protocol AFDReusableBubbleDelegate, AFDBubbleArrow;

@interface AFDReusableBubble : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *innerContentView;
@property (retain, nonatomic) AFDReusableBubbleArrowContainerView *arrowContainer;
@property (retain, nonatomic) UIView *arrowView;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) struct CGSize { double width; double height; } shadowPathSize;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (retain, nonatomic) NSMutableArray *contentViewArray;
@property (retain, nonatomic) AFDReusableBubbleContentView *currentContentView;
@property (retain, nonatomic) NSMutableDictionary *contentViewConstraintDict;
@property (retain, nonatomic) id<AFDBubbleArrow> arrow;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (nonatomic) double bubbleCornerRadius;
@property (retain, nonatomic) AFDBubbleShadow *bubbleShadow;
@property (nonatomic) BOOL useFrameLayout;
@property (nonatomic) BOOL clickable;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (weak, nonatomic) id<AFDReusableBubbleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupAnimation;
- (id)getShowAnimation;
- (id)getHideAnimation;
- (void)setupBubbleStyle;
- (void)bubble_setupUI;
- (void)hideCurrentContentView;
- (void)bubble_setupContentViewBackgroundColor:(id)a0;
- (void)tapGestureFuction;
- (void)updateContentView:(id)a0;
- (void)showWithAnimation:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addContentView:(id)a0;
- (void)layoutSubviews;
- (void)dismiss:(id /* block */)a0;

@end
