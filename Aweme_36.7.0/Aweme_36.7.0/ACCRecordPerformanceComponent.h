@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService;

@interface ACCRecordPerformanceComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCCreativePathMessage>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL isViewDisappeared;
@property (nonatomic) BOOL hasReleasePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidDisappear;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (unsigned long long)preferredLoadPhase;
- (void)creativePathPageDidAppear:(unsigned long long)a0;
- (id)panelNameFromPanelView:(id)a0;
- (BOOL)executeMemoryPrediction;
- (BOOL)releaseCameraWhenBachUploadIfNeed;
- (void)executeMemoryStrategeIfEnable;
- (BOOL)isCameraPageInFront;
- (void)releasePreviewIfStrategyEnable;
- (void)releaseCameraIfStrategyEnable;
- (BOOL)enableCurrentSceneReleasePreview;
- (void).cxx_destruct;

@end
