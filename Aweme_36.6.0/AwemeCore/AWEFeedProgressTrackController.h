@class NSString;

@interface AWEFeedProgressTrackController : AWEAwemeFeedBaseController

@property (copy, nonatomic) NSString *bottomEnterMethod;

- (void)onAwemeBottomBarNotification:(id)a0;
- (void)onAwemeBottomBtnNotification:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
