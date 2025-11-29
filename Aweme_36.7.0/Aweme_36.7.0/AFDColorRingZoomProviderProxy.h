@class NSDictionary, NSObject;
@protocol AWEZoomTransitionOuterContextProvider;

@interface AFDColorRingZoomProviderProxy : UIViewController <AWEZoomTransitionOuterContextProvider>

@property (weak, nonatomic) NSObject<AWEZoomTransitionOuterContextProvider> *provider;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (double)zoomTransitionTargetViewCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewFixedFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (void)zoomTransitionMagnifyFinish;
- (void)zoomTransitionShrinkFinish;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
