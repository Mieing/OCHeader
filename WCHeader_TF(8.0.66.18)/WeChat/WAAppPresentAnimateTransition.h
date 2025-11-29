@class NSString;

@interface WAAppPresentAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) BOOL maskEnable;
@property (nonatomic) BOOL needZoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (BOOL)isZoomPresentAnimationUseNewImplementation;
- (BOOL)isNormalPresentAnimationUseNewImplementation;
- (id)makeForVCViewAnimation:(double)a0 zoomFactor:(double)a1;
- (id)makeMaskViewAnimationGroup:(double)a0 zoomFactor:(double)a1;

@end
