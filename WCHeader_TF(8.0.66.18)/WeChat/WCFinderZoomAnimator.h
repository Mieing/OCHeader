@class NSString, WCFinderZoomAnimatingData, WCFinderZoomCacheData, WCFinderZoomAnimatorShareData, NSMutableArray, WCFinderTransitionUserInfo;
@protocol WCFinderZoomAnimatorBehavior, WCFinderZoomAnimatorDelegate;

@interface WCFinderZoomAnimator : NSObject <NSCopying, WCFinderTrailingAnimator> {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } animatedViewAnimateTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } snapViewAnimateTransform;
    double finalCornerRadius;
}

@property (retain, nonatomic) NSString *animationKey;
@property (retain, nonatomic) id strongRefFactory;
@property (weak, nonatomic) id<WCFinderZoomAnimatorBehavior> snapFactory;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) WCFinderZoomAnimatingData *animatingData;
@property (retain, nonatomic) WCFinderTransitionUserInfo *tempUserInfo;
@property (retain, nonatomic) WCFinderZoomCacheData *cacheData;
@property (retain, nonatomic) WCFinderZoomAnimatorShareData *shareData;
@property (nonatomic) long long type;
@property (nonatomic) double centerPos;
@property (nonatomic) BOOL useSpring;
@property (nonatomic) double springDamping;
@property (nonatomic) double springVelocity;
@property (readonly, nonatomic) WCFinderTransitionUserInfo *userInfo;
@property (readonly, nonatomic) BOOL isClosure;
@property (retain, nonatomic) NSString *refTid;
@property (readonly, nonatomic) NSString *currentRefTid;
@property (weak, nonatomic) id<WCFinderZoomAnimatorDelegate> delegate;
@property (copy, nonatomic) id /* block */ checker;
@property (nonatomic) BOOL animatedAsCard;
@property (nonatomic) BOOL allowDragDownClose;
@property (nonatomic) BOOL coverContentMode;
@property (nonatomic) long long animationCurve;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)finderFeedTransitionAsCard;
+ (id)animatorWithView:(id)a0;
+ (id)animatorWithRetainBehavior:(id)a0;
+ (id)animatorWithWeakBehavior:(id)a0;
+ (id)defaultShareData;
+ (id)defaultShareDataWithSetter:(id /* block */)a0;
+ (BOOL)HasZoomAnimatorForKey:(id)a0;
+ (id)ZoomAnimatorForKey:(id)a0;
+ (void)RebindAnimztorWithBehavior:(id)a0 key:(id)a1;

- (id)init;
- (void)addCompletion:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)beforeAnimiation:(id)a0;
- (id)snapViewFromFactory:(id)a0;
- (id)createCacheSnapView;
- (void)animatedDisappearDirectly:(id)a0;
- (void)startAnimation:(id)a0;
- (double)customAnimationDuration:(double)a0 progress:(double)a1;
- (void)_runAnimation:(id)a0;
- (void)_runAnimationClosure:(id)a0;
- (void)_runAnimationExpand:(id)a0;
- (void)runPartAnimation:(double)a0 block:(id /* block */)a1;
- (void)onAnimationComplete:(BOOL)a0 context:(id)a1;
- (BOOL)shouldGestureClosureAsCard;
- (BOOL)shouldPinBackView;
- (BOOL)shouldDragDownAsCard;
- (BOOL)hasCustomAnimationFromVC:(id)a0 toVC:(id)a1 type:(long long)a2 userInfo:(id)a3;
- (BOOL)shouldGestureClosureAsCardForVC:(id)a0 userInfo:(id)a1;
- (BOOL)shouldDragDownAsCardForVC:(id)a0 userInfo:(id)a1;
- (BOOL)shouldPinBackViewWhenDraggingForVC:(id)a0 userInfo:(id)a1;
- (void)onAnimationPrepare:(long long)a0 userInfo:(id)a1;
- (void)onAnimationCleanUp:(BOOL)a0;
- (id)chooseAnimatorWithOther:(id /* block */)a0 context:(id)a1;
- (void).cxx_destruct;

@end
