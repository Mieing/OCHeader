@class BDXBridgeEventSubscriber;

@interface AWELandscapeFeedTimingCloseController : AWELandscapeFeedBaseController

@property (nonatomic) long long totalCountdownTime;
@property (nonatomic) BOOL isTimingCloseRunning;
@property (retain, nonatomic) BDXBridgeEventSubscriber *timingCloseSubscriber;

- (void)didEnterLandscape;
- (void)willExitLandscape;
- (void)setupTimingCloseSubscriber;
- (void)setupOldTimingCloseSubscriber;
- (void)trackLandscapeModePlayTimeWithExtraParams:(id)a0;
- (void).cxx_destruct;

@end
