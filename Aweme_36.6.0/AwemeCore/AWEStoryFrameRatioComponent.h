@class NSArray, AWEFrameRatioSwitchButton, NSString;
@protocol ACCRecorderViewContainer, ACCRecordFrameRatioService, ACCRecordSwitchModeService, ACCCameraService, ACCRecordPropService, ACCRecordSidebarService;

@interface AWEStoryFrameRatioComponent : ACCFeatureComponent <ACCCreativePathMessage, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) AWEFrameRatioSwitchButton *switchButton;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) NSArray *frameRatioArray;
@property (nonatomic) unsigned long long currentFrameRatioIndex;
@property (nonatomic) BOOL isAspectRatioManuallySelected;
@property (nonatomic) BOOL hasTrigeredSwitchMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)creativePathPageDidAppear:(unsigned long long)a0;
- (void)bindServices:(id)a0;
- (id)getCurrentModeID;
- (long long)frameRationTypeFromFeatureRation:(unsigned long long)a0;
- (void)switchFrameRatioWithType:(long long)a0;
- (void)updateTrackShootRatioWithFrameRatioType:(long long)a0;
- (void)sendFrameRatioClickEvent;
- (void)clickSwitchButton;
- (void)saveRatioForRecordModeID:(id)a0;
- (BOOL)shouldAutoSwitchTo16To9Ratio;
- (void)updateSwitchButtonWithMode:(id)a0;
- (unsigned long long)featureRationFromFramRationType:(long long)a0;
- (void).cxx_destruct;

@end
