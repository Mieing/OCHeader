@class IESGCPExplainCardLynxContainerView;

@interface IESGCPExplainCardAnimator : NSObject

@property (retain, nonatomic) IESGCPExplainCardLynxContainerView *animationView;

- (id)initWithAnimationView:(id)a0;
- (void)animateZoomInWithDirection:(long long)a0 completion:(id /* block */)a1;
- (void)animateSmallZoomInWithDirection:(long long)a0 completion:(id /* block */)a1;
- (void)animateZoomOutWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)animateFadeOutWithCompletion:(id /* block */)a0;

@end
