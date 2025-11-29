@class NSMutableDictionary;

@interface WCCanvasLinearLayout : WCCanvasComponent

@property (retain, nonatomic) NSMutableDictionary *viewContainer;
@property (nonatomic) BOOL needRelayout;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)canvasCloseBtnClick;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)fetchFirstComponentForType:(int)a0;
- (void)shareComponentDidBeClickedWithType:(long long)a0;
- (void).cxx_destruct;

@end
