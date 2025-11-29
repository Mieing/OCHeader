@interface AWERecommendLiveTrackController : AWEPlayInteractionNewBaseController

@property (nonatomic) BOOL isDisplaying;

- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
