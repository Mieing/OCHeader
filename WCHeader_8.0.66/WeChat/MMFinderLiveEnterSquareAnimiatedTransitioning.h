@class NSString, MMFinderLiveEnterSqaureTransitionContext, UIViewController;
@protocol MMFinderLiveEnterSquareAnimiatedDelegate;

@interface MMFinderLiveEnterSquareAnimiatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>

@property (nonatomic) BOOL isInteracting;
@property (nonatomic) BOOL isPresent;
@property (weak, nonatomic) id<MMFinderLiveEnterSquareAnimiatedDelegate> delegate;
@property (nonatomic) BOOL isPop;
@property (retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

- (id)initWithViewController:(id)a0;
- (id)initWithTransitionContext:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)initailFinderLiveSquareAnimationWithViewController:(id)a0;
- (void)finderLiveSquareAnimateTransition:(id)a0;
- (double)finderLiveSquareAnimationTransitionDuration:(id)a0;
- (void).cxx_destruct;

@end
