@class AFDPinchZoomInTipsView;

@interface AFDPinchZoomInTransition : AFDPinchZoomTransition

@property (retain, nonatomic) AFDPinchZoomInTipsView *tipsView;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 numberOfTouches:(unsigned long long)a3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (BOOL)shouldCompleteWithScale:(double)a0 typeMask:(unsigned long long)a1;
- (void)showTipsViewIfNeededWithScale:(double)a0;
- (void)triggerHapticIfNeededWithScale:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
