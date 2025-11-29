@class NSString, UIViewController;
@protocol AWEPOILiveFloatOnTop;

@interface AWEPOIDecorationExtension : AWEPOIBaseExtension

@property (retain, nonatomic) id<AWEPOILiveFloatOnTop> floatOnTopManager;
@property (weak, nonatomic) UIViewController *preViewController;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) unsigned long long floatLiveWindowStatus;
@property (nonatomic) BOOL isHomed;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) BOOL isLoaded;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)configWithRouterParamDict:(id)a0;
- (BOOL)isLivePipShow;
- (void)detachLiveFloatOnTop;
- (void)attachLiveFloatOnTop;
- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)initializeExtension;
- (BOOL)shouldShowLiveWindow;
- (void)setupLiveFloatOnTopStateBlockIfNeeded;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillDisappear;

@end
