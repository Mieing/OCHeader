@class MMProgressViewEx, NSString, UIView, WCAdvertiseSphereView;

@interface WCCanvasSphereImageComponent : WCCanvasComponent <WCAdvertiseSphereViewDelegate>

@property (retain, nonatomic) WCAdvertiseSphereView *sphereView;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (retain, nonatomic) UIView *turnToExploreView;
@property (nonatomic) BOOL didDelayShowScrollDownArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)initViews;
- (void)dealloc;
- (id)fetchSphereOriginSnapshotAndNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)tryToStartSphereMonitoring;
- (void)tryToStopSphereMonitoring;
- (void)tryToResetSphereMotionData;
- (void)showTurnToSearchView;
- (void)hideTurnToSearchView;
- (void)lightScrollDownArea;
- (void)dimScrollDownArea;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (BOOL)shouldShowScrollDownArea;
- (double)fetchScrollDownAreaDelayTime;
- (void)resourceLoading;
- (void)resourceDidLoad;
- (void)resourceDidFailed;
- (id)getBackGroundColorWhenLoading;
- (void)idleStateDidChenged:(BOOL)a0;
- (void)onPanGestureEnd;
- (void).cxx_destruct;

@end
