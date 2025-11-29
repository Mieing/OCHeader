@class MMFinderLiveActivityTaskId, MMFinderLiveActivityTask, MMFinderLiveOlyBarrageContainerView;

@interface MMFinderLiveWinterOlympicView : MMFinderLiveView

@property (retain, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property (readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
@property (retain, nonatomic) MMFinderLiveOlyBarrageContainerView *barrageContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundAnimationPrimaryGraphicsFrame;
@property (nonatomic) struct { double x; double y; double r; } backgroundAnimationPrimaryGraphicsOutlineCircle;
@property (nonatomic) struct CGSize { double width; double height; } backgroundAnimationCanvasSize;
@property (nonatomic) unsigned long long backgroundAnimationCountdownDay;
@property (nonatomic) BOOL isWidgetHiddenForParticipateAnimation;
@property (nonatomic) BOOL showLiveStream;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 andDelegate:(id)a2;
- (void)layoutUI;
- (void)layoutCDNView;
- (void)showFullScreenLoading:(BOOL)a0 withLoadingText:(id)a1 hasDelayed:(BOOL)a2;
- (id)minimizeSrcView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinimizeSrcFrameForBusiness:(long long)a0;
- (void)layoutBarrageContainerView;
- (double)barrageContainerTopMargin;
- (double)barrageContainerBottomMargin;
- (void)updateBarrageContainerAlpha;
- (id)requestLiveViewHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWidgetsHiddenForParticipateAnimation:(BOOL)a0;
- (void).cxx_destruct;

@end
