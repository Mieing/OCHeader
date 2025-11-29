@class NSString, AWELiveFormatScoreView;

@interface AWELiveFormatSportScoreElement : AWELiveTopElement <AWELivePreStreamMessageSubscriber>

@property (retain, nonatomic) AWELiveFormatScoreView *scoreView;
@property (nonatomic) BOOL isHiddenScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)p_canShow;
- (void)streamPlayer_stop;
- (unsigned long long)liveElementType;
- (void)p_adjustForLandscape;
- (BOOL)p_gameNotStart;
- (id)p_gameStartTime;
- (id)p_gameDate;
- (void)showScoreIfNeed;
- (id)p_gameForAccess;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
