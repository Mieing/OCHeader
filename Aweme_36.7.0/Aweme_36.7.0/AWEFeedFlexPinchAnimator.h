@class UITabBarController, UIViewController, UIView;
@protocol AFDPinchZoomEventTrackerProtocol, AWEFeedFlexPinchAnimatorContextProviderProtocol, AFDPinchUpdateAnimatorProtocol;

@interface AWEFeedFlexPinchAnimator : NSObject

@property (retain, nonatomic) id<AWEFeedFlexPinchAnimatorContextProviderProtocol> fromCP;
@property (retain, nonatomic) UIViewController *fromVC;
@property (nonatomic) struct CGPoint { double x; double y; } pinchStartPoint;
@property (nonatomic) double initialVelocity;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pinchTargetViewRealFrame;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *animationContainerView;
@property (retain, nonatomic) UIView *animationBackgroundView;
@property (retain, nonatomic) UIView *pinchTargetView;
@property (retain, nonatomic) UIView *skeletonView;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) id<AFDPinchUpdateAnimatorProtocol> pinchAnimationUpdater;
@property (retain, nonatomic) id<AFDPinchZoomEventTrackerProtocol> pinchZoomTracker;
@property (nonatomic) BOOL isInFinishAnimation;
@property (nonatomic) BOOL hasMatchedEnterDoubleColumnScaleThreshold;
@property (nonatomic) BOOL hasMatchedScaleLessThanOne;
@property (nonatomic) BOOL hasMatchedScaleMoreThanOne;
@property (nonatomic) BOOL hasChangedPinchDirection;
@property (nonatomic) BOOL hasTriggeredEnterDoubleColumnHaptic;
@property (nonatomic) BOOL hasTriggeredEnterPureModeHaptic;
@property (nonatomic) BOOL canEnterDoubleColumn;

+ (void)startAnimationWithPinchGesture:(id)a0 fromVC:(id)a1 contextProvider:(id)a2;
+ (void)updateAnimationWithPinchGesture:(id)a0;
+ (void)finishAnimationWithPinchGesture:(id)a0;
+ (id)sharedAnimator;
+ (void)reset;

- (id)getPinchTargetView;
- (double)calculateSkeletonAndTipsAlphaWithPinchScale:(double)a0;
- (void)triggerHapticIfNeededWithScale:(double)a0;
- (void)startAnimationWithPinchGesture:(id)a0 fromVC:(id)a1 contextProvider:(id)a2;
- (void)updateAnimationWithPinchGesture:(id)a0;
- (void)finishAnimationWithPinchGesture:(id)a0;
- (void)triggerRecoverAnimation;
- (BOOL)shouldEnterDoubleColumn;
- (id)getPureModeViewController;
- (id)getAnimationContainerView;
- (id)getAnimationBackgroundView;
- (id)getAnimationBackgroundColor;
- (id)getSkeletonView;
- (id)getPinchAnimationUpdater;
- (id)getTipsView;
- (double)getPinchEnterDoubleColumnScaleThreshold;
- (unsigned long long)getDestinationTypeWithPinchGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPinchTartViewTargetFrameWithDestinationType:(unsigned long long)a0;
- (long long)getPinchDisorderStyle;
- (BOOL)getEnableFlexPinchHaptic;
- (double)getPinchEnterPureModeScaleThreshold;
- (BOOL)shouldEnterPureMode;
- (void).cxx_destruct;
- (void)reset;

@end
