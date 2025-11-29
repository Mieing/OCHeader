@class NSString;
@protocol AWETransitionContextProvider;

@interface AWETransitionTemplateAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) id<AWETransitionContextProvider> contextProvider;
@property (nonatomic) BOOL didStartAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContextProvider:(id)a0;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
