@class NSArray, NSString, WCFinderLivePlayerSlider, NSMutableArray;

@interface WCFinderLiveReplaySliderBar : UIView <WCFinderLivePlayerSliderDelegate>

@property (nonatomic) double totalTime;
@property (retain, nonatomic) NSMutableArray *greateTimeDotList;
@property (retain, nonatomic) NSArray *greateTimeList;
@property (retain, nonatomic) WCFinderLivePlayerSlider *videoSlider;
@property (nonatomic) BOOL isRecentShockInStartOrEnd;
@property (copy, nonatomic) id /* block */ sliderDragCallback;
@property (copy, nonatomic) id /* block */ greateTimeDotTapCallback;
@property (copy, nonatomic) id /* block */ sliderTapCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSliderPercent:(double)a0 equalPercent:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVideoSlider;
- (void)updateAllGreateDotsOrigin;
- (void)updateGreateDotOrigin:(id)a0;
- (id)tryGetGreateDotToInvokeTap:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPoint:(struct CGPoint { double x0; double x1; })a0 hitTouchInGreateDot:(id)a1;
- (void)updateTotalTime:(double)a0;
- (void)updateGreatTimeList:(id)a0;
- (void)configGreateTimeAttachDotValueList;
- (void)updateGreateTimeDotList;
- (id)createGreateTimeDotWithGreateTime:(double)a0;
- (void)clearAllGreateTimeDotBtns;
- (BOOL)shockInSliderPercentIfNeeded:(double)a0;
- (void)resetRecentShockTagIfNeeded:(double)a0;
- (void)onPlayerSliderPrecent:(double)a0 dragState:(unsigned long long)a1;
- (void)onPlayerSliderTouch:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
