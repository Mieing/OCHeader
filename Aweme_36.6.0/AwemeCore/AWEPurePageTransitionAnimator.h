@class NSString;
@protocol AWEPurePageTransitionAnimatorDataSource;

@interface AWEPurePageTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) long long animatorType;
@property (weak, nonatomic) id<AWEPurePageTransitionAnimatorDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)dismissAnimation:(id)a0;
- (void)presentAnimation:(id)a0;
- (id)initWithAnimatorType:(long long)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
