@interface AWELivePreStreamMonitorElement : AWELiveBusinessBaseElement

@property (nonatomic) BOOL hasBeginDragging;
@property (nonatomic) long long beginDraggingTime;
@property (nonatomic) long long endDraggingTime;
@property (nonatomic) struct CGPoint { double x; double y; } downLocation;

- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (void)preloadElement;
- (void)onUserStartEnterLiveRoom:(id)a0;
- (void)viewController_willBeginDragging:(id)a0;
- (void)viewController_willEndDragging:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)p_configUserInteractionMonitor:(BOOL)a0;
- (void)p_monitorLayoutOnEnter;
- (void)setData:(id)a0;
- (void)reset;

@end
