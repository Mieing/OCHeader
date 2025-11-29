@class NSArray, MMFinderLiveOlyBarrageTravel, NSMutableArray;

@interface MMFinderLiveOlyBarrageContentView : UIView

@property (retain, nonatomic) NSArray *barrageTravelList;
@property (retain, nonatomic) MMFinderLiveOlyBarrageTravel *barrageTravel;
@property (retain, nonatomic) NSMutableArray *displayingPubbleList;
@property (nonatomic) BOOL hasStartPlay;
@property (copy, nonatomic) id /* block */ displayFinishCompletion;
@property (copy, nonatomic) id /* block */ barragePubbleTapCallback;

- (id)initWithBarrageTravelList:(id)a0;
- (void)addBarragePubbleCellList:(id)a0;
- (void)startDisplay;
- (void)cancelDisplay;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (void)layoutSubviews;
- (void)configBarragePubbleCells:(id)a0 withTravelList:(id)a1;
- (void)innerStartDisplay;
- (id)getDisplayAnimationGroup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBarragePubblePresentFrame:(id)a0 contentPresentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)displayFinish;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
