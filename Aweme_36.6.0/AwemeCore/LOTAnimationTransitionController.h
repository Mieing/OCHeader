@class NSString, LOTAnimationView, NSBundle;

@interface LOTAnimationTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    LOTAnimationView *transitionAnimationView_;
    NSString *fromLayerName_;
    NSString *toLayerName_;
    NSBundle *inBundle_;
    BOOL _applyTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationNamed:(id)a0 fromLayerNamed:(id)a1 toLayerNamed:(id)a2 applyAnimationTransform:(BOOL)a3 inBundle:(id)a4;
- (id)initWithAnimationNamed:(id)a0 fromLayerNamed:(id)a1 toLayerNamed:(id)a2 applyAnimationTransform:(BOOL)a3;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
