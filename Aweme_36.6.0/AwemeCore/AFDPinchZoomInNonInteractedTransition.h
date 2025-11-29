@class NSString, UITabBarController, UIView, AFDPinchUpdateAnimator, UIViewController;
@protocol AFDPureModePageOuterContextProvider, AFDPinchZoomEventTrackerProtocol, AFDPureModePageInnerContextProvider;

@interface AFDPinchZoomInNonInteractedTransition : NSObject <AWETransitionContextProvider>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIViewController<AFDPureModePageOuterContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AFDPureModePageInnerContextProvider> *toCP;
@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blanketView;
@property (retain, nonatomic) UIView *pinchTargetView;
@property (retain, nonatomic) UIView *foregroundView;
@property (retain, nonatomic) AFDPinchUpdateAnimator *updateAnimator;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) id<AFDPinchZoomEventTrackerProtocol> pinchZoomTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadFullPageAdapterClass;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (id)getPinchTargetView;
- (id)getPureModePageVC;
- (id)getPinchBackgroundView;
- (id)getPinchForegroundView;
- (id)aAWEPadFullPageAdapter;
- (double)transitionDuration;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
