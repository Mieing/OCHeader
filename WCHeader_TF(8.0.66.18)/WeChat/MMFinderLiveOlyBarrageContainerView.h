@class MMFinderLiveOlyBarrageFloatingContainerView, MMFinderLiveOlyBarragePubbleMgr, NSString, MMFinderLiveActivityTaskId, NSMutableArray;

@interface MMFinderLiveOlyBarrageContainerView : UIView <MMFinderLiveOlyBarragePubbleDisplayExt, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveActivityTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveOlyBarrageFloatingContainerView *barrageFloatingContainerView;
@property (retain, nonatomic) NSMutableArray *displayingContentViewList;
@property (retain, nonatomic) NSMutableArray *preparingBarrageTravelRouteList;
@property (retain, nonatomic) MMFinderLiveOlyBarragePubbleMgr *barragePubbleMgr;
@property (nonatomic) BOOL hasStartDisplay;
@property (nonatomic) BOOL isEnableDisplay;
@property (nonatomic) long long currentLayoutStyleIndex;
@property (nonatomic) struct CGSize { double width; double height; } currSelfSize;
@property (nonatomic) BOOL isShowMinimizeWindow;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) struct { double x; double y; double r; } currLiveCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)registerExtensions;
- (void)initNotifications;
- (void)initData;
- (void)initBarragePubbleMgr;
- (void)updateResourceWithTask:(id)a0;
- (double)outerInnerRoundScalePercent;
- (void)startDisplay;
- (id)requestBarrageHitTestViewWithConvertedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshDisplayingBarragePubblesForLightTorch;
- (void)updateBackgroundTorchOutlineCircle:(struct { double x0; double x1; double x2; })a0;
- (void)updateCurrLiveCircle:(struct { double x0; double x1; double x2; })a0;
- (void)layoutSubviews;
- (void)invokeDisplay;
- (id)getNextTravelRouteConfig;
- (void)createBarrageFloatingContainerView;
- (void)clearBarrageContents;
- (void)clearBarrageContentViews;
- (void)unableDisplay;
- (void)enableDisplay;
- (id)getFinderLiveTask;
- (double)barrageContainerTopMargin;
- (double)barrageContainerBottomMargin;
- (void)configDefaultLiveCircle;
- (BOOL)hasValidLiveCircle;
- (void)onFinderLiveOlyBarragePubblePreparedForDisplay:(id)a0;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)a0;
- (void)onDismissMinimizeWindowDidEnd:(id)a0;
- (void)onMinimizeInteractiveWillEnd:(id)a0;
- (void)onCollapseAnimationWillStart:(id)a0;
- (void)onShowMinimizeWindowWillStart:(id)a0;
- (void)handleUIOrientationChanged:(id)a0;
- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
