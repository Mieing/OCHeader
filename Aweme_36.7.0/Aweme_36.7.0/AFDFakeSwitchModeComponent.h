@class NSString, AWEStudioRecorderFeatureRecordModesConfig;
@protocol ACCFilterPrivateService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordCloseService, ACCCameraService, ACCRecordPropService, AWERecordBeautyService;

@interface AFDFakeSwitchModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordCloseService> closeService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCFilterPrivateService> filterService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<AWERecordBeautyService> beautyService;
@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *featureConfig;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)prepareDataForSwitchModeToMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)postExitNotificationWithMode:(id)a0;
- (long long)realModeIDForMode:(id)a0;
- (void).cxx_destruct;

@end
