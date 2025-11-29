@class ACCCameraSubscription, DUXPopover, AWEStudioRecorderFeatureHDPhotoConfig, NSString, ACCAdvancedRecordSettingConfigManager;
@protocol ACCRecordSwitchModeService, ACCCameraService;

@interface AWERecordHDPhotoServiceImpl : ACCRecorderViewModel <AWERecordHDPhotoService>

@property (retain, nonatomic) AWEStudioRecorderFeatureHDPhotoConfig *featureConfig;
@property (retain, nonatomic) ACCAdvancedRecordSettingConfigManager *configManager;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL hasGuideShowInLifeCycle;
@property (nonatomic) BOOL hasShowTipInfoInLifeCycle;
@property (weak, nonatomic) DUXPopover *showGuidePopView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyDidTakeHDPicture:(id)a0 error:(id)a1;
- (BOOL)enableCaptureHDPhoto;
- (struct CGSize { double x0; double x1; })hdPhotoCaptureSize;
- (BOOL)shouldShowHDPhotoSettingItem;
- (BOOL)enableCaptureHDPhotoEntrance;
- (void)switchPhotoQualityState:(BOOL)a0;
- (BOOL)isModeTakePicture;
- (id)initWithServiceProvider:(id)a0 featureConfig:(id)a1;
- (BOOL)checkShootWayEnable;
- (BOOL)checkEffectSupport;
- (void)trackHDPhotoTakeResult:(id)a0;
- (BOOL)checkEffectContainsLabel:(id)a0 labelID:(id)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
