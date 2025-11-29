@class NSString, UIViewController, UIView;
@protocol AWEEcomSearchGoodsDetailZoomOuterContextProviderProtocol, UIViewControllerContextTransitioning;

@interface AWEEcomSearchProductInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *outerViewSnapshot;
@property (retain, nonatomic) UIViewController<AWEEcomSearchGoodsDetailZoomOuterContextProviderProtocol> *toCP;
@property (weak, nonatomic) id fromCP;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *outerView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerFrame;
@property (retain, nonatomic) UIView *tabBar;
@property (retain, nonatomic) UIView *snapshotTabBar;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (nonatomic) BOOL zoomOuterWithShrink;
@property (nonatomic) long long transitionCornerRadius;
@property (nonatomic) long long fromTransitionCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
