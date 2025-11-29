@class NSString, WCCanvasDynamicDataLoader;

@interface WCCanvasRedEnvelopComponent : WCCanvasComponent <CAAnimationDelegate, WCCanvasRedEnvelopComponentCardDelegate, WCCanvasDynamicDataLoaderDelegate>

@property (nonatomic) int animateState;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)layoutSubviews;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentWillStopState:(BOOL)a0;
- (void)canvasCloseBtnClick;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)a0;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)encoreShakeFetchRedEnvelopStatusInfo;
- (void)encoreShakeResetSpecialView;
- (void)shareComponentDidBeClickedWithType:(long long)a0;
- (id)currentVisibleCardView;
- (void)initViews;
- (void)parseDynamicInfo;
- (void)tryToShowRotateAnimation;
- (void)tryToShowFadeAwayAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)onActionButtonClickedWithBaseType:(int)a0 subCardType:(int)a1;
- (void)jumpToRedEnvelop;
- (void)cleanCardPendingInfo;
- (int)fetchComponentCardSubtype;
- (void)tryToUpdateCardStatusWithOpType:(unsigned int)a0;
- (void)onFetchTwistCardStatusWithResult:(BOOL)a0 opType:(unsigned int)a1 cardId:(id)a2 status:(unsigned int)a3 giveCardId:(id)a4 receiveUrl:(id)a5;
- (void)updateComponentCardViewWithStatus:(unsigned int)a0 opType:(unsigned int)a1;
- (id)fetchRedEnvelopStatusInfo;
- (void)reportComponentForReportType:(unsigned int)a0;
- (void).cxx_destruct;

@end
