@class NSString, AWERelatedVideoHunterContainer;

@interface AWERelatedVideoLVideoWidgetController : AWEVideoPlayControlBaseController <HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) AWERelatedVideoHunterContainer *hunterView;
@property (nonatomic, getter=isShowingLVWidget) BOOL showLVWidget;
@property (nonatomic) BOOL feShowLVWidget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)setHide:(BOOL)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerAddPeriodicTimeObserverCallback:(id)a0;
- (void)bindEvent;
- (void)resetWidgetEnv;
- (void)createHunterIfNeeded;
- (void)showLVWigetWithData:(id)a0 show:(BOOL)a1;
- (void)updateContainerLayout;
- (void)hideAllTipsView;
- (void)preloadHunterWithData:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
