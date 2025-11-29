@class NSString, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionRiskNoticeElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (nonatomic) BOOL isMusicInfoShow;
@property (nonatomic) double clickTime;
@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *riskNoticeBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateRiskNoticedBarView;
- (id)currentInfoForSubUnits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrame;
- (void)updateDistance:(BOOL)a0;
- (void)trackStayTimeFeedWarningStrip;
- (void)trackRiskNoticeBarViewShow;
- (void)addUrlToBarViewIfNeeded;
- (void)updateRiskNoticedBarIconWithURL:(id)a0;
- (void)updateRiskNoticeBarViewToWeakenStyle:(id)a0;
- (void)updateRiskNoticeBarViewForLargeFontAdapt;
- (void)updateRiskNoticeBarHeight;
- (void)trackClickFeedWarningStrip;
- (void)trackShowFeedWarningStrip;
- (void).cxx_destruct;
- (double)topOffset;
- (void)reset;
- (void)viewDidLoad;
- (id)currentInfo;
- (double)bottomOffset;

@end
