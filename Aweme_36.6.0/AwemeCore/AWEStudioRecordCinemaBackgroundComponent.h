@class NSString, AWEStudioRecordCinemaDynamicColorFetcher, AWEStudioRecordCinemaBackgroundView;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface AWEStudioRecordCinemaBackgroundComponent : ACCFeatureComponent <ACCCameraLifeCircleEvent, AWEStudioRecordCinemaDynamicColorFetcherDelegate, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) AWEStudioRecordCinemaBackgroundView *cinemaBackgroundView;
@property (retain, nonatomic) AWEStudioRecordCinemaDynamicColorFetcher *colorFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)cameraService:(id)a0 startVideoCaptureWithError:(id)a1;
- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)viewContainerDidLayout;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)setupBackgroundViewIfNeeded;
- (id)capture_currentCameraService;
- (void)capture_didCaptureFrameWithThreeColors:(id)a0;
- (void)capture_didCaptureFrameWithBlurImage:(id)a0;
- (void).cxx_destruct;
- (id)viewController;

@end
