@class NSString, NSMutableDictionary, AWEVideoEffectScalableRangeView, AWEVideoPlayControl, AWETimeSelectControl, UIView, IESMMEffectTimeRange;
@protocol AWEVideoEffectMixTimeBarDelegate;

@interface AWEVideoEffectMixTimeBar : UIView <AWEVideoEffectScalableRangeViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *fragmentsContainers;
@property (retain, nonatomic) NSMutableDictionary *effectRangeViewMap;
@property (retain, nonatomic) AWEVideoPlayControl *willMovingView;
@property (retain, nonatomic) AWEVideoPlayControl *movingView;
@property (nonatomic) struct CGPoint { double x; double y; } touchBeganPoint;
@property (nonatomic) struct CGPoint { double x; double y; } originalPoint;
@property (retain, nonatomic) AWEVideoEffectScalableRangeView *toolEffectRangeView;
@property (nonatomic) BOOL isShowingToolEffectRangeView;
@property (retain, nonatomic) NSMutableDictionary *timeFragmentsContainers;
@property (retain, nonatomic) NSMutableDictionary *timeEffectRangeViewMap;
@property (retain, nonatomic) AWEVideoEffectScalableRangeView *timeEffectRangeView;
@property (nonatomic) BOOL isShowingTimeEffectRangeView;
@property (retain, nonatomic) AWEVideoPlayControl *playProgressControl;
@property (retain, nonatomic) AWETimeSelectControl *timeSelectControl;
@property (retain, nonatomic) UIView *timeReverseMask;
@property (retain, nonatomic) IESMMEffectTimeRange *currentEffectTimeRange;
@property (nonatomic) BOOL needReverseTime;
@property (weak, nonatomic) id<AWEVideoEffectMixTimeBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeBarHeight;

- (void)updatePlayProgressWithTime:(double)a0 totalDuration:(double)a1;
- (void)refreshBarWithEffectArray:(id)a0 totalDuration:(double)a1;
- (void)updateShowingToolEffectRangeViewIfNeededWithCategoryKey:(id)a0 effectSelected:(BOOL)a1;
- (double)getPlayControlViewProgress;
- (void)refreshBarWithImageArray:(id)a0;
- (void)updateShowingTimeEffectRangeViewIfNeededWithType:(long long)a0;
- (void)refreshTimeEffectRangeViewWithRange:(id)a0 totalDuration:(double)a1;
- (void)setUpTimeEffectRangeViewAlpha:(double)a0;
- (void)setUpPlayProgressControlTintColor:(BOOL)a0;
- (void)animateElements;
- (void)p_updateToolEffectRangeView:(id)a0;
- (void)p_updateTimeEffectRangeView:(id)a0;
- (void)refreshEffectRangeViewWithRange:(id)a0 totalDuration:(double)a1;
- (double)getLocationWithTime:(double)a0 totalDuration:(double)a1;
- (void)updateView:(id)a0 toLocation:(double)a1;
- (double)getMovingViewProgress;
- (void)sendControlDidMoveAction;
- (void)updateMovingControlWithTouches:(id)a0;
- (void)userDidMoveControl;
- (void)p_adjustPlayProgressControl:(BOOL)a0;
- (void)p_sendControlDidMoveAction:(id)a0 progress:(double)a1;
- (double)rangeViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 couldChangeFrameWithType:(long long)a1;
- (void)rangeView:(id)a0 willChangeFrameWithType:(long long)a1;
- (void)rangeView:(id)a0 didChangeFrameWithType:(long long)a1;
- (void)rangeView:(id)a0 didFinishChangeFrameWithType:(long long)a1;
- (void)updateSelectTime:(double)a0 totalDuration:(double)a1;
- (void)p_userDidMoveControl:(id)a0 progress:(double)a1;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)accessibilityIncrement;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
