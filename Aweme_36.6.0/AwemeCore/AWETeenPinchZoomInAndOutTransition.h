@class NSString, UITabBarController, UIView, UIViewController;
@protocol IESVideoPlayerProtocol, AWETeenPureModePageOuterContextProvider, AWETeenPureModePageInnerContextProvider;

@interface AWETeenPinchZoomInAndOutTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIViewController<AWETeenPureModePageOuterContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWETeenPureModePageInnerContextProvider> *toCP;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blanketView;
@property (retain, nonatomic) UIView *pinchTargetView;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } standardTransform;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playController;
@property (nonatomic) BOOL isStartPinch;
@property (nonatomic) struct CGPoint { double x; double y; } lastPinchGesturePosition;
@property (nonatomic) struct CGPoint { double x; double y; } initialAnchorPoint;
@property (nonatomic) BOOL isNotFirstTimeSingleFingerPinchGesture;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 numberOfTouches:(unsigned long long)a3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowPinchZoomTypeForContext:(id)a0;
- (double)scaleThresholdForPatternType:(unsigned long long)a0;
- (double)calculateAppropriateScale:(double)a0;
- (BOOL)isPushType;
- (double)transitionDuration;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
