@class NSTimer, NSString;

@interface AWELandscapeFeedUserGuideController : AWELandscapeFeedBaseController <AWELandscapeGuideManagerDelegate>

@property (retain, nonatomic) NSTimer *longPressGuideTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerGuideEvent;
- (void)registerLandscapeGuide;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
