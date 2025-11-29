@class MMFinderLiveOlyBarrageTravel, MMFinderLiveOlyBarragePubbleCell;

@interface MMFinderLiveOlyBarragePubbleRoute : NSObject

@property (retain, nonatomic) MMFinderLiveOlyBarragePubbleCell *floatingPubbleCell;
@property (retain, nonatomic) MMFinderLiveOlyBarrageTravel *rootTravel;
@property (nonatomic) struct CGPoint { double x; double y; } currentCenter;
@property (nonatomic) BOOL hasInvokeContinueDisplay;
@property (copy, nonatomic) id /* block */ displayFinishCompletion;

- (void)startFloatingWithDuration:(double)a0;
- (void)endFloating;
- (void)continueDisplay;
- (void)pause;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPubbleCellPresentFrame;
- (void)adjustPresentCenter;
- (void)displayWithAnimationRoute:(id)a0;
- (double)getRadiusPercentForPoint:(struct CGPoint { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)getAnimationRouteWithPrecentCenter:(struct CGPoint { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)getLinearAnimateStageIndexWithCurrentPercent:(double)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
