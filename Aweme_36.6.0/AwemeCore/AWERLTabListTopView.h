@class NSString, NSHashTable, UIView, UIPanGestureRecognizer, UIViewController;

@interface AWERLTabListTopView : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) NSHashTable *viewControllers;
@property (readonly, nonatomic) BOOL ignoreVerticalScroll;
@property (nonatomic) BOOL isAdjustingScrollView;
@property (nonatomic) BOOL isHorizonalScrolling;
@property (nonatomic) BOOL isSticky;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bannerContainerView;
@property (retain, nonatomic) UIPanGestureRecognizer *customBouncesPanGesture;
@property (nonatomic) double customBouncesScrollViewBeginOffsetY;
@property (nonatomic) BOOL customPanGestureTriggered;
@property (nonatomic) BOOL pauseAdjustContentInsets;
@property (nonatomic) BOOL forceFloat;
@property (weak, nonatomic) UIView *staticView;
@property (nonatomic) struct { double minimum; double maximum; } slidingRange;
@property (readonly, nonatomic, getter=isFloating) BOOL floating;
@property (copy, nonatomic) id /* block */ scrollViewGetter;
@property (copy, nonatomic) id /* block */ changeContentOffsetBlock;
@property (copy, nonatomic) id /* block */ containerViewGetter;
@property (nonatomic) BOOL disableBounces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addViewController:(id)a0;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__unobserverContentSize:(id)a0;
- (void)__float;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isForce:(BOOL)a1;
- (void)__adjustViewController:(id)a0 newAdded:(BOOL)a1;
- (void)__land;
- (void)__observerContentSize:(id)a0;
- (BOOL)__enableAirCushionV2;
- (BOOL)__canLand:(id)a0;
- (void)__adjustFrameWithForceFloat;
- (id)__scrollView:(id)a0;
- (void)__forceLand;
- (void)onCustomBouncesPanGestureAction:(id)a0;
- (void)onWillBeginScrollHorizontal:(id)a0;
- (void)onScrollViewHorizontalDidScroll:(id)a0;
- (void)onDidEndScrollHorizontal:(id)a0 currentViewController:(id)a1;
- (void)onDidScrollVertical:(id)a0;
- (void)stickViewController:(id)a0;
- (void)unstickViewController:(id)a0;
- (BOOL)isStickyForViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)removeViewController:(id)a0;

@end
