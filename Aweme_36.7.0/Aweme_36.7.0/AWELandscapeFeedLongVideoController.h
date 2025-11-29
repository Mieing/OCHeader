@class NSString;

@interface AWELandscapeFeedLongVideoController : AWELandscapeFeedBaseController <AWEAdLandscapeLongVideoDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClicked;
- (void)adLongVideoBackButtonDidClick;
- (void)updateAdVideoContainer;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;

@end
