@class UIAttachmentBehavior, UIView, CADisplayLink, NSString, VSDDynamicItem, UIDynamicAnimator, VSDConfigModel, UIDynamicItemBehavior, UIPanGestureRecognizer, VSDPanContext, UIScrollView;
@protocol VSDContainerDelegate;

@interface VSDManager : NSObject <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UIView *pageView;
@property (weak, nonatomic) UIScrollView *bodyView;
@property (weak, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIDynamicAnimator *animator;
@property (weak, nonatomic) UIDynamicItemBehavior *decelerationBehavior;
@property (weak, nonatomic) UIAttachmentBehavior *springBehavior;
@property (retain, nonatomic) VSDDynamicItem *dynamicItem;
@property (nonatomic) double virtualScrollTotal;
@property (nonatomic) double realScrollTotal;
@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (retain, nonatomic) VSDConfigModel *config;
@property (nonatomic) double deltaY;
@property (weak, nonatomic) id<VSDContainerDelegate> delegate;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) VSDPanContext *lastContext;
@property (retain, nonatomic) VSDPanContext *beginContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllConstraintsFromView:(id)a0;
- (void)setupMaskView;
- (id)initWithConfig:(id)a0 rootView:(id)a1 pageView:(id)a2 bodyView:(id)a3 delegate:(id)a4;
- (void)registerNestedScrollView:(id)a0;
- (double)offsetWithState:(unsigned long long)a0;
- (void)setupOrigin;
- (void)setupNewConrol;
- (void)onTapMaskView;
- (void)executeAnimateWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)watchContentOffset;
- (double)bodyViewContentSizeHeight;
- (void)handleVerticalPanGestureContext:(id)a0;
- (void)handleHorizontalPanGestureContext:(id)a0;
- (void)_handleVerticalPanGestureContext:(id)a0;
- (double)virtualScrollTotalMax;
- (void)handleVerticalPanGestureContextWhenImmersionHalf:(id)a0;
- (void)handleVerticalPanGestureContextWhenImmersionFull:(id)a0;
- (void)handleVerticalPanGestureContextWhenFix:(id)a0;
- (void)handleVerticalPanGestureContextWhenNormal:(id)a0;
- (void)updateOriginY:(double)a0;
- (void)updateNestedOffset:(double)a0;
- (void)handleBodyViewScrollAndNestedScroll:(id)a0;
- (BOOL)hitBlockPoint:(double)a0;
- (double)virtualScrollBodyMax;
- (double)halfScreenEndHeight;
- (BOOL)isAnimatorRunning;
- (BOOL)isDeltaYFast;
- (void).cxx_destruct;
- (void)setupDisplayLink;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)removeAllBehaviors;
- (void)handlePanGesture:(id)a0;
- (void)changeToState:(unsigned long long)a0;
- (void)updateContentOffset:(double)a0;

@end
