@class NSNumber, NSMutableArray, MMUIButton;
@protocol WCFinderProgressBarDelegate, WCFinderProgressBarExtendDelegate;

@interface WCFinderProgressBar : UIView

@property (nonatomic) double lastHapticTimestamp;
@property (retain, nonatomic) NSNumber *valueNum;
@property (nonatomic) double lastX;
@property (retain, nonatomic) NSMutableArray *anchorPointViews;
@property (retain, nonatomic) NSMutableArray *highlightAnchorPointViews;
@property (weak, nonatomic) id<WCFinderProgressBarDelegate> delegate;
@property (weak, nonatomic) id<WCFinderProgressBarExtendDelegate> extendDelegate;
@property (nonatomic, getter=isShowLargeBar) BOOL showLargeBar;
@property (nonatomic, getter=isShowAnchorPoint) BOOL showAnchorPoint;
@property (readonly, nonatomic) MMUIButton *dotBtn;
@property (readonly, nonatomic) BOOL canShowHighlightAnchorPoints;

+ (double)progressBarEdgeSpeedUpPercent;
+ (double)progressBarEdgeSpeedUpScale;

- (double)value;
- (void)setValue:(double)a0;
- (void)setValue:(double)a0 animateWithDuration:(double)a1 time:(double)a2;
- (void)setValue:(double)a0 animateWithDuration:(double)a1 completion:(id /* block */)a2;
- (void)manualSetMidViewValue:(double)a0;
- (void)updateUIWithValue:(double)a0;
- (void)reset;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)removeProgressAnimation;
- (void)resetAnimation;
- (id)leftBarView;
- (id)rightBarView;
- (id)midBarView;
- (BOOL)isInMidBarDraggingState;
- (void)handleDynamicAnchorPointWithGesState:(long long)a0;
- (void)updateHapticTimestamp;
- (void)triggerHapticIfNeeded:(double)a0;
- (void)_triggerHaptic;
- (BOOL)shouldTriggerHaptic:(double)a0;
- (BOOL)_shouldTriggerMidBarHaptic:(double)a0;
- (BOOL)shouldAnimateToProgress:(double)a0 duration:(double)a1;
- (BOOL)checkProgressValueValid:(double)a0;
- (void)layoutHighlightAnchorPointView:(id)a0;
- (void)layoutAllHighlightAnchorPointViews;
- (void)updateHighlightAnchorPointsWithHighlightProgressNumberList:(id)a0;
- (void)clearHighlightAnchorPointViews;
- (id)getConfig;
- (void).cxx_destruct;

@end
