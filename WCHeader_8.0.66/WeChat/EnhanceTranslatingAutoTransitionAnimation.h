@class NSString, EnhanceTranslatingView;

@interface EnhanceTranslatingAutoTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) EnhanceTranslatingView *enhanceTranslatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
