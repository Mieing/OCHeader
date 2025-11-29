@class NSString, MMFinderLiveEnterSqaureTransitionContext;

@interface MMFinderLiveExitSqaureTransitionController : MMFinderLiveEnterSqaureTransitionController <MMFinderLiveEnterSqaurePanGestureHandlerDelegate>

@property (retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originPlayerControlViewFrame;
@property (nonatomic) double currentPlayerBottonHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isSpecialState;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(BOOL)a0;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2 isPop:(BOOL)a3;
- (void)prepareForAnimation;
- (void)performAniamtorDelay:(double)a0 completion:(id /* block */)a1;
- (void)performRecoverAnimator:(id /* block */)a0;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(BOOL)a0;
- (void)animationDidEnd:(BOOL)a0;

@end
