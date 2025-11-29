@interface AWEPlayInteractionIMBusinessController : AWEPlayInteractionNewBaseController

@property (nonatomic) BOOL isReportedPlayBackTime;

- (void)reportViewStateWithViewState:(unsigned long long)a0;
- (void)p_reportGoodShowViewState;
- (void)p_trackFeedShareUnread;
- (void)reset;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
