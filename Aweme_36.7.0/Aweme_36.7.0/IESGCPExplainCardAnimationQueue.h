@class NSArray, NSMutableArray, IESGCPExplainCardAnimator;

@interface IESGCPExplainCardAnimationQueue : NSObject

@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) IESGCPExplainCardAnimator *animator;
@property (readonly, copy, nonatomic) NSArray *currentItemArray;

- (void)runningNextAnimationIfNeed;
- (void)animateZoomInWithAnimationItem:(id)a0 direction:(long long)a1 completion:(id /* block */)a2;
- (void)animateSmallZoomInWithAnimationItem:(id)a0 direction:(long long)a1 completion:(id /* block */)a2;
- (void)animateZoomOutWithAnimationItem:(id)a0 completion:(id /* block */)a1;
- (void)animateFadeOutWithAnimationItem:(id)a0 completion:(id /* block */)a1;
- (void)enqueueAnimationItem:(id)a0;
- (void)removePendingAnimationItems;
- (void).cxx_destruct;

@end
